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
// source: google/cloud/compute/licenses/v1/licenses.proto

#include "google/cloud/compute/licenses/v1/internal/licenses_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_licenses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LicensesRestLogging::LicensesRestLogging(
    std::shared_ptr<LicensesRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesRestLogging::AsyncDeleteLicense(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
              request) {
        return child_->AsyncDeleteLicense(cq, std::move(rest_context),
                                          std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
LicensesRestLogging::DeleteLicense(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
              request) {
        return child_->DeleteLicense(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::License>
LicensesRestLogging::GetLicense(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::licenses::v1::GetLicenseRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::licenses::v1::GetLicenseRequest const&
                 request) {
        return child_->GetLicense(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
LicensesRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
              request) {
        return child_->GetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesRestLogging::AsyncInsertLicense(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
              request) {
        return child_->AsyncInsertLicense(cq, std::move(rest_context),
                                          std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
LicensesRestLogging::InsertLicense(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
              request) {
        return child_->InsertLicense(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::LicensesListResponse>
LicensesRestLogging::ListLicenses(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::licenses::v1::ListLicensesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::compute::licenses::v1::ListLicensesRequest const&
              request) {
        return child_->ListLicenses(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
LicensesRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
              request) {
        return child_->SetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicensesRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::licenses::v1::TestIamPermissionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::licenses::v1::
                 TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesRestLogging::AsyncUpdateLicense(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::licenses::v1::UpdateLicenseRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::cpp::compute::licenses::v1::UpdateLicenseRequest const&
              request) {
        return child_->AsyncUpdateLicense(cq, std::move(rest_context),
                                          std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
LicensesRestLogging::UpdateLicense(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::licenses::v1::UpdateLicenseRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::compute::licenses::v1::UpdateLicenseRequest const&
              request) {
        return child_->UpdateLicense(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::global_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context),
                                         std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> LicensesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1_internal
}  // namespace cloud
}  // namespace google
