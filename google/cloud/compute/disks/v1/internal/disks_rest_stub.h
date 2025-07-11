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
// source: google/cloud/compute/disks/v1/disks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_INTERNAL_DISKS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_INTERNAL_DISKS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/disks/v1/disks.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DisksRestStub {
 public:
  virtual ~DisksRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddResourcePolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  AddResourcePolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>
  AggregatedListDisks(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncBulkInsert(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::BulkInsertRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> BulkInsert(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::BulkInsertRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncBulkSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::BulkSetLabelsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> BulkSetLabels(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::BulkSetLabelsRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncCreateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> CreateSnapshot(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::DeleteDiskRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteDisk(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::DeleteDiskRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Disk> GetDisk(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::GetDiskRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::InsertDiskRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> InsertDisk(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::InsertDiskRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::DiskList> ListDisks(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::ListDisksRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveResourcePolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::
          RemoveResourcePoliciesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  RemoveResourcePolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::
          RemoveResourcePoliciesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncResize(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::ResizeRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Resize(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::ResizeRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::SetLabelsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::SetLabelsRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncStartAsyncReplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::
          StartAsyncReplicationRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  StartAsyncReplication(google::cloud::rest_internal::RestContext& rest_context,
                        Options const& options,
                        google::cloud::cpp::compute::disks::v1::
                            StartAsyncReplicationRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncStopAsyncReplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  StopAsyncReplication(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncStopGroupAsyncReplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::
          StopGroupAsyncReplicationRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  StopGroupAsyncReplication(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::
          StopGroupAsyncReplicationRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::UpdateDiskRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateDisk(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::UpdateDiskRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::zone_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultDisksRestStub : public DisksRestStub {
 public:
  ~DefaultDisksRestStub() override = default;

  explicit DefaultDisksRestStub(Options options);
  DefaultDisksRestStub(std::shared_ptr<rest_internal::RestClient> service,
                       std::shared_ptr<rest_internal::RestClient> operations,
                       Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddResourcePolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddResourcePolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>
  AggregatedListDisks(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncBulkInsert(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::BulkInsertRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> BulkInsert(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::BulkInsertRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncBulkSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::BulkSetLabelsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> BulkSetLabels(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::BulkSetLabelsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncCreateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> CreateSnapshot(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::DeleteDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteDisk(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::DeleteDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Disk> GetDisk(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::GetDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::InsertDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertDisk(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::InsertDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::DiskList> ListDisks(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::ListDisksRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveResourcePolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::
          RemoveResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveResourcePolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::
          RemoveResourcePoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncResize(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::ResizeRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Resize(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::ResizeRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncStartAsyncReplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::
          StartAsyncReplicationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> StartAsyncReplication(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::
          StartAsyncReplicationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncStopAsyncReplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> StopAsyncReplication(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncStopGroupAsyncReplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::
          StopGroupAsyncReplicationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  StopGroupAsyncReplication(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::
          StopGroupAsyncReplicationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncUpdateDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::disks::v1::UpdateDiskRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateDisk(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::disks::v1::UpdateDiskRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::zone_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_INTERNAL_DISKS_REST_STUB_H
