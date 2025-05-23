// Copyright 2024 Google LLC
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
// source: google/cloud/cloudcontrolspartner/v1/core.proto

#include "google/cloud/cloudcontrolspartner/v1/cloud_controls_partner_core_connection.h"
#include "google/cloud/cloudcontrolspartner/v1/cloud_controls_partner_core_options.h"
#include "google/cloud/cloudcontrolspartner/v1/internal/cloud_controls_partner_core_connection_impl.h"
#include "google/cloud/cloudcontrolspartner/v1/internal/cloud_controls_partner_core_option_defaults.h"
#include "google/cloud/cloudcontrolspartner/v1/internal/cloud_controls_partner_core_stub_factory.h"
#include "google/cloud/cloudcontrolspartner/v1/internal/cloud_controls_partner_core_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudcontrolspartner_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudControlsPartnerCoreConnection::~CloudControlsPartnerCoreConnection() =
    default;

StatusOr<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreConnection::GetWorkload(
    google::cloud::cloudcontrolspartner::v1::GetWorkloadRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreConnection::ListWorkloads(
    google::cloud::cloudcontrolspartner::v1::
        ListWorkloadsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cloudcontrolspartner::v1::Workload>>();
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreConnection::GetCustomer(
    google::cloud::cloudcontrolspartner::v1::GetCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreConnection::ListCustomers(
    google::cloud::cloudcontrolspartner::v1::
        ListCustomersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cloudcontrolspartner::v1::Customer>>();
}

StatusOr<google::cloud::cloudcontrolspartner::v1::EkmConnections>
CloudControlsPartnerCoreConnection::GetEkmConnections(
    google::cloud::cloudcontrolspartner::v1::GetEkmConnectionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cloudcontrolspartner::v1::PartnerPermissions>
CloudControlsPartnerCoreConnection::GetPartnerPermissions(
    google::cloud::cloudcontrolspartner::v1::
        GetPartnerPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::cloudcontrolspartner::v1::AccessApprovalRequest>
CloudControlsPartnerCoreConnection::ListAccessApprovalRequests(
    google::cloud::cloudcontrolspartner::v1::
        ListAccessApprovalRequestsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::cloudcontrolspartner::v1::AccessApprovalRequest>>();
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Partner>
CloudControlsPartnerCoreConnection::GetPartner(
    google::cloud::cloudcontrolspartner::v1::GetPartnerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreConnection::CreateCustomer(
    google::cloud::cloudcontrolspartner::v1::CreateCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreConnection::UpdateCustomer(
    google::cloud::cloudcontrolspartner::v1::UpdateCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudControlsPartnerCoreConnection::DeleteCustomer(
    google::cloud::cloudcontrolspartner::v1::DeleteCustomerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<CloudControlsPartnerCoreConnection>
MakeCloudControlsPartnerCoreConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CloudControlsPartnerCorePolicyOptionList>(
      options, __func__);
  options =
      cloudcontrolspartner_v1_internal::CloudControlsPartnerCoreDefaultOptions(
          std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = cloudcontrolspartner_v1_internal::
      CreateDefaultCloudControlsPartnerCoreStub(std::move(auth), options);
  return cloudcontrolspartner_v1_internal::
      MakeCloudControlsPartnerCoreTracingConnection(
          std::make_shared<cloudcontrolspartner_v1_internal::
                               CloudControlsPartnerCoreConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudcontrolspartner_v1
}  // namespace cloud
}  // namespace google
