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
// source: google/cloud/securitycenter/v2/securitycenter_service.proto

#include "google/cloud/securitycenter/v2/internal/security_center_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securitycenter_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecurityCenterTracingConnection::SecurityCenterTracingConnection(
    std::shared_ptr<securitycenter_v2::SecurityCenterConnection> child)
    : child_(std::move(child)) {}

StatusOr<
    google::cloud::securitycenter::v2::BatchCreateResourceValueConfigsResponse>
SecurityCenterTracingConnection::BatchCreateResourceValueConfigs(
    google::cloud::securitycenter::v2::
        BatchCreateResourceValueConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::"
      "BatchCreateResourceValueConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->BatchCreateResourceValueConfigs(request));
}

future<StatusOr<google::cloud::securitycenter::v2::BulkMuteFindingsResponse>>
SecurityCenterTracingConnection::BulkMuteFindings(
    google::cloud::securitycenter::v2::BulkMuteFindingsRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::BulkMuteFindings");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BulkMuteFindings(request));
}

StatusOr<google::longrunning::Operation>
SecurityCenterTracingConnection::BulkMuteFindings(
    NoAwaitTag,
    google::cloud::securitycenter::v2::BulkMuteFindingsRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::BulkMuteFindings");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->BulkMuteFindings(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::securitycenter::v2::BulkMuteFindingsResponse>>
SecurityCenterTracingConnection::BulkMuteFindings(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::BulkMuteFindings");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BulkMuteFindings(operation));
}

StatusOr<google::cloud::securitycenter::v2::BigQueryExport>
SecurityCenterTracingConnection::CreateBigQueryExport(
    google::cloud::securitycenter::v2::CreateBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::CreateBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateBigQueryExport(request));
}

StatusOr<google::cloud::securitycenter::v2::Finding>
SecurityCenterTracingConnection::CreateFinding(
    google::cloud::securitycenter::v2::CreateFindingRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::CreateFinding");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateFinding(request));
}

StatusOr<google::cloud::securitycenter::v2::MuteConfig>
SecurityCenterTracingConnection::CreateMuteConfig(
    google::cloud::securitycenter::v2::CreateMuteConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::CreateMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateMuteConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
SecurityCenterTracingConnection::CreateNotificationConfig(
    google::cloud::securitycenter::v2::CreateNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::CreateNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateNotificationConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::Source>
SecurityCenterTracingConnection::CreateSource(
    google::cloud::securitycenter::v2::CreateSourceRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::CreateSource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSource(request));
}

Status SecurityCenterTracingConnection::DeleteBigQueryExport(
    google::cloud::securitycenter::v2::DeleteBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::DeleteBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteBigQueryExport(request));
}

Status SecurityCenterTracingConnection::DeleteMuteConfig(
    google::cloud::securitycenter::v2::DeleteMuteConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::DeleteMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteMuteConfig(request));
}

Status SecurityCenterTracingConnection::DeleteNotificationConfig(
    google::cloud::securitycenter::v2::DeleteNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::DeleteNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteNotificationConfig(request));
}

Status SecurityCenterTracingConnection::DeleteResourceValueConfig(
    google::cloud::securitycenter::v2::DeleteResourceValueConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::DeleteResourceValueConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteResourceValueConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::BigQueryExport>
SecurityCenterTracingConnection::GetBigQueryExport(
    google::cloud::securitycenter::v2::GetBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBigQueryExport(request));
}

StatusOr<google::cloud::securitycenter::v2::Simulation>
SecurityCenterTracingConnection::GetSimulation(
    google::cloud::securitycenter::v2::GetSimulationRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetSimulation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSimulation(request));
}

StatusOr<google::cloud::securitycenter::v2::ValuedResource>
SecurityCenterTracingConnection::GetValuedResource(
    google::cloud::securitycenter::v2::GetValuedResourceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetValuedResource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetValuedResource(request));
}

StatusOr<google::iam::v1::Policy> SecurityCenterTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::cloud::securitycenter::v2::MuteConfig>
SecurityCenterTracingConnection::GetMuteConfig(
    google::cloud::securitycenter::v2::GetMuteConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMuteConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
SecurityCenterTracingConnection::GetNotificationConfig(
    google::cloud::securitycenter::v2::GetNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNotificationConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::ResourceValueConfig>
SecurityCenterTracingConnection::GetResourceValueConfig(
    google::cloud::securitycenter::v2::GetResourceValueConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetResourceValueConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetResourceValueConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::Source>
SecurityCenterTracingConnection::GetSource(
    google::cloud::securitycenter::v2::GetSourceRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetSource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSource(request));
}

StreamRange<google::cloud::securitycenter::v2::GroupResult>
SecurityCenterTracingConnection::GroupFindings(
    google::cloud::securitycenter::v2::GroupFindingsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GroupFindings");
  internal::OTelScope scope(span);
  auto sr = child_->GroupFindings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::GroupResult>(std::move(span),
                                                      std::move(sr));
}

StreamRange<google::cloud::securitycenter::v2::AttackPath>
SecurityCenterTracingConnection::ListAttackPaths(
    google::cloud::securitycenter::v2::ListAttackPathsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListAttackPaths");
  internal::OTelScope scope(span);
  auto sr = child_->ListAttackPaths(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::AttackPath>(std::move(span),
                                                     std::move(sr));
}

StreamRange<google::cloud::securitycenter::v2::BigQueryExport>
SecurityCenterTracingConnection::ListBigQueryExports(
    google::cloud::securitycenter::v2::ListBigQueryExportsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListBigQueryExports");
  internal::OTelScope scope(span);
  auto sr = child_->ListBigQueryExports(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::BigQueryExport>(std::move(span),
                                                         std::move(sr));
}

StreamRange<
    google::cloud::securitycenter::v2::ListFindingsResponse::ListFindingsResult>
SecurityCenterTracingConnection::ListFindings(
    google::cloud::securitycenter::v2::ListFindingsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListFindings");
  internal::OTelScope scope(span);
  auto sr = child_->ListFindings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::ListFindingsResponse::
          ListFindingsResult>(std::move(span), std::move(sr));
}

StreamRange<google::cloud::securitycenter::v2::MuteConfig>
SecurityCenterTracingConnection::ListMuteConfigs(
    google::cloud::securitycenter::v2::ListMuteConfigsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListMuteConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListMuteConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::MuteConfig>(std::move(span),
                                                     std::move(sr));
}

StreamRange<google::cloud::securitycenter::v2::NotificationConfig>
SecurityCenterTracingConnection::ListNotificationConfigs(
    google::cloud::securitycenter::v2::ListNotificationConfigsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListNotificationConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListNotificationConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::NotificationConfig>(std::move(span),
                                                             std::move(sr));
}

StreamRange<google::cloud::securitycenter::v2::ResourceValueConfig>
SecurityCenterTracingConnection::ListResourceValueConfigs(
    google::cloud::securitycenter::v2::ListResourceValueConfigsRequest
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListResourceValueConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListResourceValueConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::ResourceValueConfig>(std::move(span),
                                                              std::move(sr));
}

StreamRange<google::cloud::securitycenter::v2::Source>
SecurityCenterTracingConnection::ListSources(
    google::cloud::securitycenter::v2::ListSourcesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListSources");
  internal::OTelScope scope(span);
  auto sr = child_->ListSources(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::Source>(std::move(span),
                                                 std::move(sr));
}

StreamRange<google::cloud::securitycenter::v2::ValuedResource>
SecurityCenterTracingConnection::ListValuedResources(
    google::cloud::securitycenter::v2::ListValuedResourcesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListValuedResources");
  internal::OTelScope scope(span);
  auto sr = child_->ListValuedResources(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v2::ValuedResource>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::securitycenter::v2::Finding>
SecurityCenterTracingConnection::SetFindingState(
    google::cloud::securitycenter::v2::SetFindingStateRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::SetFindingState");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetFindingState(request));
}

StatusOr<google::iam::v1::Policy> SecurityCenterTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::securitycenter::v2::Finding>
SecurityCenterTracingConnection::SetMute(
    google::cloud::securitycenter::v2::SetMuteRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::SetMute");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetMute(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StatusOr<google::cloud::securitycenter::v2::BigQueryExport>
SecurityCenterTracingConnection::UpdateBigQueryExport(
    google::cloud::securitycenter::v2::UpdateBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::UpdateBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateBigQueryExport(request));
}

StatusOr<google::cloud::securitycenter::v2::ExternalSystem>
SecurityCenterTracingConnection::UpdateExternalSystem(
    google::cloud::securitycenter::v2::UpdateExternalSystemRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::UpdateExternalSystem");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateExternalSystem(request));
}

StatusOr<google::cloud::securitycenter::v2::Finding>
SecurityCenterTracingConnection::UpdateFinding(
    google::cloud::securitycenter::v2::UpdateFindingRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::UpdateFinding");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateFinding(request));
}

StatusOr<google::cloud::securitycenter::v2::MuteConfig>
SecurityCenterTracingConnection::UpdateMuteConfig(
    google::cloud::securitycenter::v2::UpdateMuteConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::UpdateMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateMuteConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
SecurityCenterTracingConnection::UpdateNotificationConfig(
    google::cloud::securitycenter::v2::UpdateNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::UpdateNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateNotificationConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::ResourceValueConfig>
SecurityCenterTracingConnection::UpdateResourceValueConfig(
    google::cloud::securitycenter::v2::UpdateResourceValueConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::UpdateResourceValueConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateResourceValueConfig(request));
}

StatusOr<google::cloud::securitycenter::v2::SecurityMarks>
SecurityCenterTracingConnection::UpdateSecurityMarks(
    google::cloud::securitycenter::v2::UpdateSecurityMarksRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::UpdateSecurityMarks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSecurityMarks(request));
}

StatusOr<google::cloud::securitycenter::v2::Source>
SecurityCenterTracingConnection::UpdateSource(
    google::cloud::securitycenter::v2::UpdateSourceRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::UpdateSource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSource(request));
}

StreamRange<google::longrunning::Operation>
SecurityCenterTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
SecurityCenterTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status SecurityCenterTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status SecurityCenterTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v2::SecurityCenterConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<securitycenter_v2::SecurityCenterConnection>
MakeSecurityCenterTracingConnection(
    std::shared_ptr<securitycenter_v2::SecurityCenterConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SecurityCenterTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v2_internal
}  // namespace cloud
}  // namespace google
