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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#include "google/cloud/aiplatform/v1/internal/vizier_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VizierServiceTracingConnection::VizierServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::VizierServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceTracingConnection::CreateStudy(
    google::cloud::aiplatform::v1::CreateStudyRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::CreateStudy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateStudy(request));
}

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceTracingConnection::GetStudy(
    google::cloud::aiplatform::v1::GetStudyRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::GetStudy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetStudy(request));
}

StreamRange<google::cloud::aiplatform::v1::Study>
VizierServiceTracingConnection::ListStudies(
    google::cloud::aiplatform::v1::ListStudiesRequest request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::ListStudies");
  internal::OTelScope scope(span);
  auto sr = child_->ListStudies(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::aiplatform::v1::Study>(
      std::move(span), std::move(sr));
}

Status VizierServiceTracingConnection::DeleteStudy(
    google::cloud::aiplatform::v1::DeleteStudyRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::DeleteStudy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteStudy(request));
}

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceTracingConnection::LookupStudy(
    google::cloud::aiplatform::v1::LookupStudyRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::LookupStudy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->LookupStudy(request));
}

future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>
VizierServiceTracingConnection::SuggestTrials(
    google::cloud::aiplatform::v1::SuggestTrialsRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::SuggestTrials");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SuggestTrials(request));
}

StatusOr<google::longrunning::Operation>
VizierServiceTracingConnection::SuggestTrials(
    NoAwaitTag,
    google::cloud::aiplatform::v1::SuggestTrialsRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::SuggestTrials");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->SuggestTrials(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>
VizierServiceTracingConnection::SuggestTrials(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::SuggestTrials");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SuggestTrials(operation));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceTracingConnection::CreateTrial(
    google::cloud::aiplatform::v1::CreateTrialRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::CreateTrial");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTrial(request));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceTracingConnection::GetTrial(
    google::cloud::aiplatform::v1::GetTrialRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::GetTrial");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTrial(request));
}

StreamRange<google::cloud::aiplatform::v1::Trial>
VizierServiceTracingConnection::ListTrials(
    google::cloud::aiplatform::v1::ListTrialsRequest request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::ListTrials");
  internal::OTelScope scope(span);
  auto sr = child_->ListTrials(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::aiplatform::v1::Trial>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceTracingConnection::AddTrialMeasurement(
    google::cloud::aiplatform::v1::AddTrialMeasurementRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::AddTrialMeasurement");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AddTrialMeasurement(request));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceTracingConnection::CompleteTrial(
    google::cloud::aiplatform::v1::CompleteTrialRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::CompleteTrial");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CompleteTrial(request));
}

Status VizierServiceTracingConnection::DeleteTrial(
    google::cloud::aiplatform::v1::DeleteTrialRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::DeleteTrial");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTrial(request));
}

future<StatusOr<
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>
VizierServiceTracingConnection::CheckTrialEarlyStoppingState(
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::CheckTrialEarlyStoppingState");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CheckTrialEarlyStoppingState(request));
}

StatusOr<google::longrunning::Operation>
VizierServiceTracingConnection::CheckTrialEarlyStoppingState(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::CheckTrialEarlyStoppingState");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CheckTrialEarlyStoppingState(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>
VizierServiceTracingConnection::CheckTrialEarlyStoppingState(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::CheckTrialEarlyStoppingState");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CheckTrialEarlyStoppingState(operation));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceTracingConnection::StopTrial(
    google::cloud::aiplatform::v1::StopTrialRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::StopTrial");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->StopTrial(request));
}

StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
VizierServiceTracingConnection::ListOptimalTrials(
    google::cloud::aiplatform::v1::ListOptimalTrialsRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::ListOptimalTrials");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListOptimalTrials(request));
}

StreamRange<google::cloud::location::Location>
VizierServiceTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
VizierServiceTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span =
      internal::MakeSpan("aiplatform_v1::VizierServiceConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StatusOr<google::iam::v1::Policy> VizierServiceTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> VizierServiceTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
VizierServiceTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::longrunning::Operation>
VizierServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
VizierServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status VizierServiceTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status VizierServiceTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

StatusOr<google::longrunning::Operation>
VizierServiceTracingConnection::WaitOperation(
    google::longrunning::WaitOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::VizierServiceConnection::WaitOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->WaitOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::VizierServiceConnection>
MakeVizierServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::VizierServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<VizierServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
