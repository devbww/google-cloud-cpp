// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/instance_admin_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

InstanceAdminConnectionIdempotencyPolicy::
    ~InstanceAdminConnectionIdempotencyPolicy() = default;

std::unique_ptr<InstanceAdminConnectionIdempotencyPolicy>
InstanceAdminConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<InstanceAdminConnectionIdempotencyPolicy>(*this);
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::ListInstanceConfigs(
    google::spanner::admin::instance::v1::
        ListInstanceConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::GetInstanceConfig(
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::CreateInstanceConfig(
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::UpdateInstanceConfig(
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::DeleteInstanceConfig(
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
InstanceAdminConnectionIdempotencyPolicy::ListInstanceConfigOperations(
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::ListInstances(
    google::spanner::admin::instance::v1::ListInstancesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::ListInstancePartitions(
    google::spanner::admin::instance::v1::
        ListInstancePartitionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::GetInstance(
    google::spanner::admin::instance::v1::GetInstanceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::CreateInstance(
    google::spanner::admin::instance::v1::CreateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::UpdateInstance(
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::DeleteInstance(
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::GetInstancePartition(
    google::spanner::admin::instance::v1::GetInstancePartitionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::CreateInstancePartition(
    google::spanner::admin::instance::v1::
        CreateInstancePartitionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::DeleteInstancePartition(
    google::spanner::admin::instance::v1::
        DeleteInstancePartitionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::UpdateInstancePartition(
    google::spanner::admin::instance::v1::
        UpdateInstancePartitionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
InstanceAdminConnectionIdempotencyPolicy::ListInstancePartitionOperations(
    google::spanner::admin::instance::v1::
        ListInstancePartitionOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::MoveInstance(
    google::spanner::admin::instance::v1::MoveInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceAdminConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<InstanceAdminConnectionIdempotencyPolicy>
MakeDefaultInstanceAdminConnectionIdempotencyPolicy() {
  return std::make_unique<InstanceAdminConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google
