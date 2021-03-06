// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/object_write_stream.h"

namespace google {
namespace cloud {
namespace storage {
inline namespace STORAGE_CLIENT_NS {

ObjectWriteStream::ObjectWriteStream(
    std::unique_ptr<internal::ObjectWriteStreambuf> buf)
    : std::basic_ostream<char>(nullptr), buf_(std::move(buf)) {
  init(buf_.get());
  // If buf_ is already closed, update internal state to represent
  // the fact that no more bytes can be uploaded to this object.
  if (buf_ && !buf_->IsOpen()) CloseBuf();
}

ObjectWriteStream::~ObjectWriteStream() {
  if (!IsOpen()) return;
  // Disable exceptions, even if the application had enabled exceptions the
  // destructor is supposed to mask them.
  exceptions(std::ios_base::goodbit);
  buf_->AutoFlushFinal();
}

void ObjectWriteStream::Close() {
  if (!buf_) return;
  CloseBuf();
}

void ObjectWriteStream::CloseBuf() {
  auto response = buf_->Close();
  if (!response.ok()) {
    metadata_ = std::move(response).status();
    setstate(std::ios_base::badbit);
    return;
  }
  headers_ = {};
  if (response->payload.has_value()) {
    metadata_ = *std::move(response->payload);
  }
  if (metadata_ && !buf_->ValidateHash(*metadata_)) {
    setstate(std::ios_base::badbit);
  }
}

void ObjectWriteStream::Suspend() && { buf_.reset(); }

}  // namespace STORAGE_CLIENT_NS
}  // namespace storage
}  // namespace cloud
}  // namespace google
