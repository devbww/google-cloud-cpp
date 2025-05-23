// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/devicestreaming/v1/service.proto

#include "google/cloud/devicestreaming/v1/direct_access_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace devicestreaming_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DirectAccessServiceConnectionIdempotencyPolicy::
    ~DirectAccessServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<DirectAccessServiceConnectionIdempotencyPolicy>
DirectAccessServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DirectAccessServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency DirectAccessServiceConnectionIdempotencyPolicy::CreateDeviceSession(
    google::cloud::devicestreaming::v1::CreateDeviceSessionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DirectAccessServiceConnectionIdempotencyPolicy::ListDeviceSessions(
    google::cloud::devicestreaming::v1::ListDeviceSessionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DirectAccessServiceConnectionIdempotencyPolicy::GetDeviceSession(
    google::cloud::devicestreaming::v1::GetDeviceSessionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DirectAccessServiceConnectionIdempotencyPolicy::CancelDeviceSession(
    google::cloud::devicestreaming::v1::CancelDeviceSessionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DirectAccessServiceConnectionIdempotencyPolicy::UpdateDeviceSession(
    google::cloud::devicestreaming::v1::UpdateDeviceSessionRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<DirectAccessServiceConnectionIdempotencyPolicy>
MakeDefaultDirectAccessServiceConnectionIdempotencyPolicy() {
  return std::make_unique<DirectAccessServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace devicestreaming_v1
}  // namespace cloud
}  // namespace google
