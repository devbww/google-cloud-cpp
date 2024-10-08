// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/prediction_service.proto

#include "google/cloud/aiplatform/v1/prediction_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PredictionServiceConnectionIdempotencyPolicy::
    ~PredictionServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<PredictionServiceConnectionIdempotencyPolicy>
PredictionServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<PredictionServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::Predict(
    google::cloud::aiplatform::v1::PredictRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::RawPredict(
    google::cloud::aiplatform::v1::RawPredictRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::DirectPredict(
    google::cloud::aiplatform::v1::DirectPredictRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::DirectRawPredict(
    google::cloud::aiplatform::v1::DirectRawPredictRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::Explain(
    google::cloud::aiplatform::v1::ExplainRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::GenerateContent(
    google::cloud::aiplatform::v1::GenerateContentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::WaitOperation(
    google::longrunning::WaitOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<PredictionServiceConnectionIdempotencyPolicy>
MakeDefaultPredictionServiceConnectionIdempotencyPolicy() {
  return std::make_unique<PredictionServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
