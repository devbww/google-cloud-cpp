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
// source: google/cloud/parametermanager/v1/service.proto

#include "google/cloud/parametermanager/v1/parameter_manager_connection.h"
#include "google/cloud/parametermanager/v1/internal/parameter_manager_connection_impl.h"
#include "google/cloud/parametermanager/v1/internal/parameter_manager_option_defaults.h"
#include "google/cloud/parametermanager/v1/internal/parameter_manager_stub_factory.h"
#include "google/cloud/parametermanager/v1/internal/parameter_manager_tracing_connection.h"
#include "google/cloud/parametermanager/v1/parameter_manager_options.h"
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
namespace parametermanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ParameterManagerConnection::~ParameterManagerConnection() = default;

StreamRange<google::cloud::parametermanager::v1::Parameter>
ParameterManagerConnection::ListParameters(
    google::cloud::parametermanager::v1::
        ListParametersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::parametermanager::v1::Parameter>>();
}

StatusOr<google::cloud::parametermanager::v1::Parameter>
ParameterManagerConnection::GetParameter(
    google::cloud::parametermanager::v1::GetParameterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::parametermanager::v1::Parameter>
ParameterManagerConnection::CreateParameter(
    google::cloud::parametermanager::v1::CreateParameterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::parametermanager::v1::Parameter>
ParameterManagerConnection::UpdateParameter(
    google::cloud::parametermanager::v1::UpdateParameterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ParameterManagerConnection::DeleteParameter(
    google::cloud::parametermanager::v1::DeleteParameterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::parametermanager::v1::ParameterVersion>
ParameterManagerConnection::ListParameterVersions(
    google::cloud::parametermanager::v1::
        ListParameterVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::parametermanager::v1::ParameterVersion>>();
}

StatusOr<google::cloud::parametermanager::v1::ParameterVersion>
ParameterManagerConnection::GetParameterVersion(
    google::cloud::parametermanager::v1::GetParameterVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::parametermanager::v1::RenderParameterVersionResponse>
ParameterManagerConnection::RenderParameterVersion(
    google::cloud::parametermanager::v1::RenderParameterVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::parametermanager::v1::ParameterVersion>
ParameterManagerConnection::CreateParameterVersion(
    google::cloud::parametermanager::v1::CreateParameterVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::parametermanager::v1::ParameterVersion>
ParameterManagerConnection::UpdateParameterVersion(
    google::cloud::parametermanager::v1::UpdateParameterVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ParameterManagerConnection::DeleteParameterVersion(
    google::cloud::parametermanager::v1::DeleteParameterVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::location::Location>
ParameterManagerConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location>
ParameterManagerConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ParameterManagerConnection> MakeParameterManagerConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ParameterManagerPolicyOptionList>(options,
                                                                   __func__);
  options = parametermanager_v1_internal::ParameterManagerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = parametermanager_v1_internal::CreateDefaultParameterManagerStub(
      std::move(auth), options);
  return parametermanager_v1_internal::MakeParameterManagerTracingConnection(
      std::make_shared<
          parametermanager_v1_internal::ParameterManagerConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace parametermanager_v1
}  // namespace cloud
}  // namespace google
