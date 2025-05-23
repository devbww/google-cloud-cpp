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
// source: google/cloud/compute/interconnect_groups/v1/interconnect_groups.proto

#include "google/cloud/compute/interconnect_groups/v1/internal/interconnect_groups_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_interconnect_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InterconnectGroupsRestMetadata::InterconnectGroupsRestMetadata(
    std::shared_ptr<InterconnectGroupsRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectGroupsRestMetadata::AsyncCreateMembers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        CreateMembersRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCreateMembers(cq, std::move(rest_context),
                                    std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectGroupsRestMetadata::CreateMembers(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        CreateMembersRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->CreateMembers(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectGroupsRestMetadata::AsyncDeleteInterconnectGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        DeleteInterconnectGroupRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteInterconnectGroup(cq, std::move(rest_context),
                                              std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectGroupsRestMetadata::DeleteInterconnectGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        DeleteInterconnectGroupRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteInterconnectGroup(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectGroup>
InterconnectGroupsRestMetadata::GetInterconnectGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        GetInterconnectGroupRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetInterconnectGroup(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InterconnectGroupsRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        GetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetIamPolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::
             InterconnectGroupsGetOperationalStatusResponse>
InterconnectGroupsRestMetadata::GetOperationalStatus(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        GetOperationalStatusRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetOperationalStatus(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectGroupsRestMetadata::AsyncInsertInterconnectGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        InsertInterconnectGroupRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertInterconnectGroup(cq, std::move(rest_context),
                                              std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectGroupsRestMetadata::InsertInterconnectGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        InsertInterconnectGroupRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->InsertInterconnectGroup(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectGroupsListResponse>
InterconnectGroupsRestMetadata::ListInterconnectGroups(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        ListInterconnectGroupsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListInterconnectGroups(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectGroupsRestMetadata::AsyncPatchInterconnectGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        PatchInterconnectGroupRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchInterconnectGroup(cq, std::move(rest_context),
                                             std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectGroupsRestMetadata::PatchInterconnectGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        PatchInterconnectGroupRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->PatchInterconnectGroup(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InterconnectGroupsRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        SetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->SetIamPolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InterconnectGroupsRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::interconnect_groups::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectGroupsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> InterconnectGroupsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void InterconnectGroupsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_groups_v1_internal
}  // namespace cloud
}  // namespace google
