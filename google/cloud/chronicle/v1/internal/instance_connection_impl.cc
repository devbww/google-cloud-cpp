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
// source: google/cloud/chronicle/v1/instance.proto

#include "google/cloud/chronicle/v1/internal/instance_connection_impl.h"
#include "google/cloud/chronicle/v1/internal/instance_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace chronicle_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<chronicle_v1::InstanceServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<chronicle_v1::InstanceServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<chronicle_v1::InstanceServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<chronicle_v1::InstanceServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<chronicle_v1::InstanceServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

InstanceServiceConnectionImpl::InstanceServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<chronicle_v1_internal::InstanceServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      InstanceServiceConnection::options())) {}

StatusOr<google::cloud::chronicle::v1::Instance>
InstanceServiceConnectionImpl::GetInstance(
    google::cloud::chronicle::v1::GetInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInstance(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::GetInstanceRequest const& request) {
        return stub_->GetInstance(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::longrunning::Operation>
InstanceServiceConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<chronicle_v1::InstanceServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::longrunning::ListOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::longrunning::ListOperationsRequest const& request) {
              return stub->ListOperations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::longrunning::ListOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::longrunning::Operation>
InstanceServiceConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

Status InstanceServiceConnectionImpl::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return stub_->DeleteOperation(context, options, request);
      },
      *current, request, __func__);
}

Status InstanceServiceConnectionImpl::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return stub_->CancelOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace chronicle_v1_internal
}  // namespace cloud
}  // namespace google
