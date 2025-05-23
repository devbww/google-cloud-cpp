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

#include "google/cloud/cloudcontrolspartner/v1/cloud_controls_partner_core_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudcontrolspartner_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudControlsPartnerCoreClient::CloudControlsPartnerCoreClient(
    std::shared_ptr<CloudControlsPartnerCoreConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CloudControlsPartnerCoreClient::~CloudControlsPartnerCoreClient() = default;

StatusOr<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreClient::GetWorkload(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::GetWorkloadRequest request;
  request.set_name(name);
  return connection_->GetWorkload(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreClient::GetWorkload(
    google::cloud::cloudcontrolspartner::v1::GetWorkloadRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetWorkload(request);
}

StreamRange<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreClient::ListWorkloads(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::ListWorkloadsRequest request;
  request.set_parent(parent);
  return connection_->ListWorkloads(request);
}

StreamRange<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreClient::ListWorkloads(
    google::cloud::cloudcontrolspartner::v1::ListWorkloadsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListWorkloads(std::move(request));
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreClient::GetCustomer(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::GetCustomerRequest request;
  request.set_name(name);
  return connection_->GetCustomer(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreClient::GetCustomer(
    google::cloud::cloudcontrolspartner::v1::GetCustomerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCustomer(request);
}

StreamRange<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreClient::ListCustomers(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::ListCustomersRequest request;
  request.set_parent(parent);
  return connection_->ListCustomers(request);
}

StreamRange<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreClient::ListCustomers(
    google::cloud::cloudcontrolspartner::v1::ListCustomersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCustomers(std::move(request));
}

StatusOr<google::cloud::cloudcontrolspartner::v1::EkmConnections>
CloudControlsPartnerCoreClient::GetEkmConnections(std::string const& name,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::GetEkmConnectionsRequest request;
  request.set_name(name);
  return connection_->GetEkmConnections(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::EkmConnections>
CloudControlsPartnerCoreClient::GetEkmConnections(
    google::cloud::cloudcontrolspartner::v1::GetEkmConnectionsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEkmConnections(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::PartnerPermissions>
CloudControlsPartnerCoreClient::GetPartnerPermissions(std::string const& name,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::GetPartnerPermissionsRequest request;
  request.set_name(name);
  return connection_->GetPartnerPermissions(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::PartnerPermissions>
CloudControlsPartnerCoreClient::GetPartnerPermissions(
    google::cloud::cloudcontrolspartner::v1::GetPartnerPermissionsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPartnerPermissions(request);
}

StreamRange<google::cloud::cloudcontrolspartner::v1::AccessApprovalRequest>
CloudControlsPartnerCoreClient::ListAccessApprovalRequests(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::ListAccessApprovalRequestsRequest
      request;
  request.set_parent(parent);
  return connection_->ListAccessApprovalRequests(request);
}

StreamRange<google::cloud::cloudcontrolspartner::v1::AccessApprovalRequest>
CloudControlsPartnerCoreClient::ListAccessApprovalRequests(
    google::cloud::cloudcontrolspartner::v1::ListAccessApprovalRequestsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAccessApprovalRequests(std::move(request));
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Partner>
CloudControlsPartnerCoreClient::GetPartner(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::GetPartnerRequest request;
  request.set_name(name);
  return connection_->GetPartner(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Partner>
CloudControlsPartnerCoreClient::GetPartner(
    google::cloud::cloudcontrolspartner::v1::GetPartnerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPartner(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreClient::CreateCustomer(
    std::string const& parent,
    google::cloud::cloudcontrolspartner::v1::Customer const& customer,
    std::string const& customer_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::CreateCustomerRequest request;
  request.set_parent(parent);
  *request.mutable_customer() = customer;
  request.set_customer_id(customer_id);
  return connection_->CreateCustomer(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreClient::CreateCustomer(
    google::cloud::cloudcontrolspartner::v1::CreateCustomerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCustomer(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreClient::UpdateCustomer(
    google::cloud::cloudcontrolspartner::v1::Customer const& customer,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::UpdateCustomerRequest request;
  *request.mutable_customer() = customer;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCustomer(request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreClient::UpdateCustomer(
    google::cloud::cloudcontrolspartner::v1::UpdateCustomerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCustomer(request);
}

Status CloudControlsPartnerCoreClient::DeleteCustomer(std::string const& name,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cloudcontrolspartner::v1::DeleteCustomerRequest request;
  request.set_name(name);
  return connection_->DeleteCustomer(request);
}

Status CloudControlsPartnerCoreClient::DeleteCustomer(
    google::cloud::cloudcontrolspartner::v1::DeleteCustomerRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCustomer(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudcontrolspartner_v1
}  // namespace cloud
}  // namespace google
