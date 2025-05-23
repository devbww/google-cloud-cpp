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
// source: google/storage/control/v2/storage_control.proto

#include "google/cloud/storagecontrol/v2/internal/storage_control_connection_impl.h"
#include "google/cloud/storagecontrol/v2/internal/storage_control_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storagecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<storagecontrol_v2::StorageControlRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<storagecontrol_v2::StorageControlRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<storagecontrol_v2::StorageControlBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<storagecontrol_v2::StorageControlConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<storagecontrol_v2::StorageControlConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<storagecontrol_v2::StorageControlPollingPolicyOption>()
      ->clone();
}

}  // namespace

StorageControlConnectionImpl::StorageControlConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<storagecontrol_v2_internal::StorageControlStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      StorageControlConnection::options())) {}

StatusOr<google::storage::control::v2::Folder>
StorageControlConnectionImpl::CreateFolder(
    google::storage::control::v2::CreateFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateFolder(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::CreateFolderRequest const& request) {
        return stub_->CreateFolder(context, options, request);
      },
      *current, request_copy, __func__);
}

Status StorageControlConnectionImpl::DeleteFolder(
    google::storage::control::v2::DeleteFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteFolder(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::DeleteFolderRequest const& request) {
        return stub_->DeleteFolder(context, options, request);
      },
      *current, request_copy, __func__);
}

StatusOr<google::storage::control::v2::Folder>
StorageControlConnectionImpl::GetFolder(
    google::storage::control::v2::GetFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetFolder(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::GetFolderRequest const& request) {
        return stub_->GetFolder(context, options, request);
      },
      *current, request_copy, __func__);
}

StreamRange<google::storage::control::v2::Folder>
StorageControlConnectionImpl::ListFolders(
    google::storage::control::v2::ListFoldersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListFolders(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::storage::control::v2::Folder>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<storagecontrol_v2::StorageControlRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::storage::control::v2::ListFoldersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::storage::control::v2::ListFoldersRequest const&
                       request) {
              return stub->ListFolders(context, options, request);
            },
            options, r, function_name);
      },
      [](google::storage::control::v2::ListFoldersResponse r) {
        std::vector<google::storage::control::v2::Folder> result(
            r.folders().size());
        auto& messages = *r.mutable_folders();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::storage::control::v2::Folder>>
StorageControlConnectionImpl::RenameFolder(
    google::storage::control::v2::RenameFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  auto const idempotent =
      idempotency_policy(*current)->RenameFolder(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::storage::control::v2::Folder>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::storage::control::v2::RenameFolderRequest const& request) {
        return stub->AsyncRenameFolder(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::storage::control::v2::Folder>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
StorageControlConnectionImpl::RenameFolder(
    NoAwaitTag,
    google::storage::control::v2::RenameFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RenameFolder(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::RenameFolderRequest const& request) {
        return stub_->RenameFolder(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::storage::control::v2::Folder>>
StorageControlConnectionImpl::RenameFolder(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::storage::control::v2::RenameFolderMetadata>()) {
    return make_ready_future<StatusOr<google::storage::control::v2::Folder>>(
        internal::InvalidArgumentError(
            "operation does not correspond to RenameFolder",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::storage::control::v2::Folder>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::storage::control::v2::Folder>,
      polling_policy(*current), __func__);
}

StatusOr<google::storage::control::v2::StorageLayout>
StorageControlConnectionImpl::GetStorageLayout(
    google::storage::control::v2::GetStorageLayoutRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetStorageLayout(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::GetStorageLayoutRequest const&
                 request) {
        return stub_->GetStorageLayout(context, options, request);
      },
      *current, request_copy, __func__);
}

StatusOr<google::storage::control::v2::ManagedFolder>
StorageControlConnectionImpl::CreateManagedFolder(
    google::storage::control::v2::CreateManagedFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateManagedFolder(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::CreateManagedFolderRequest const&
                 request) {
        return stub_->CreateManagedFolder(context, options, request);
      },
      *current, request_copy, __func__);
}

Status StorageControlConnectionImpl::DeleteManagedFolder(
    google::storage::control::v2::DeleteManagedFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteManagedFolder(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::DeleteManagedFolderRequest const&
                 request) {
        return stub_->DeleteManagedFolder(context, options, request);
      },
      *current, request_copy, __func__);
}

StatusOr<google::storage::control::v2::ManagedFolder>
StorageControlConnectionImpl::GetManagedFolder(
    google::storage::control::v2::GetManagedFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetManagedFolder(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::GetManagedFolderRequest const&
                 request) {
        return stub_->GetManagedFolder(context, options, request);
      },
      *current, request_copy, __func__);
}

StreamRange<google::storage::control::v2::ManagedFolder>
StorageControlConnectionImpl::ListManagedFolders(
    google::storage::control::v2::ListManagedFoldersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListManagedFolders(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::storage::control::v2::ManagedFolder>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<storagecontrol_v2::StorageControlRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::storage::control::v2::ListManagedFoldersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::storage::control::v2::ListManagedFoldersRequest const&
                    request) {
              return stub->ListManagedFolders(context, options, request);
            },
            options, r, function_name);
      },
      [](google::storage::control::v2::ListManagedFoldersResponse r) {
        std::vector<google::storage::control::v2::ManagedFolder> result(
            r.managed_folders().size());
        auto& messages = *r.mutable_managed_folders();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::storage::control::v2::AnywhereCache>>
StorageControlConnectionImpl::CreateAnywhereCache(
    google::storage::control::v2::CreateAnywhereCacheRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  auto const idempotent =
      idempotency_policy(*current)->CreateAnywhereCache(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::storage::control::v2::AnywhereCache>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::storage::control::v2::CreateAnywhereCacheRequest const&
              request) {
        return stub->AsyncCreateAnywhereCache(cq, std::move(context),
                                              std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::storage::control::v2::AnywhereCache>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
StorageControlConnectionImpl::CreateAnywhereCache(
    NoAwaitTag,
    google::storage::control::v2::CreateAnywhereCacheRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAnywhereCache(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::CreateAnywhereCacheRequest const&
                 request) {
        return stub_->CreateAnywhereCache(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::storage::control::v2::AnywhereCache>>
StorageControlConnectionImpl::CreateAnywhereCache(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::storage::control::v2::
                   CreateAnywhereCacheMetadata>()) {
    return make_ready_future<
        StatusOr<google::storage::control::v2::AnywhereCache>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateAnywhereCache",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::storage::control::v2::AnywhereCache>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::storage::control::v2::AnywhereCache>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::storage::control::v2::AnywhereCache>>
StorageControlConnectionImpl::UpdateAnywhereCache(
    google::storage::control::v2::UpdateAnywhereCacheRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  auto const idempotent =
      idempotency_policy(*current)->UpdateAnywhereCache(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::storage::control::v2::AnywhereCache>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::storage::control::v2::UpdateAnywhereCacheRequest const&
              request) {
        return stub->AsyncUpdateAnywhereCache(cq, std::move(context),
                                              std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::storage::control::v2::AnywhereCache>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
StorageControlConnectionImpl::UpdateAnywhereCache(
    NoAwaitTag,
    google::storage::control::v2::UpdateAnywhereCacheRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateAnywhereCache(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::UpdateAnywhereCacheRequest const&
                 request) {
        return stub_->UpdateAnywhereCache(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::storage::control::v2::AnywhereCache>>
StorageControlConnectionImpl::UpdateAnywhereCache(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::storage::control::v2::
                   UpdateAnywhereCacheMetadata>()) {
    return make_ready_future<
        StatusOr<google::storage::control::v2::AnywhereCache>>(
        internal::InvalidArgumentError(
            "operation does not correspond to UpdateAnywhereCache",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::storage::control::v2::AnywhereCache>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::storage::control::v2::AnywhereCache>,
      polling_policy(*current), __func__);
}

StatusOr<google::storage::control::v2::AnywhereCache>
StorageControlConnectionImpl::DisableAnywhereCache(
    google::storage::control::v2::DisableAnywhereCacheRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DisableAnywhereCache(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::DisableAnywhereCacheRequest const&
                 request) {
        return stub_->DisableAnywhereCache(context, options, request);
      },
      *current, request_copy, __func__);
}

StatusOr<google::storage::control::v2::AnywhereCache>
StorageControlConnectionImpl::PauseAnywhereCache(
    google::storage::control::v2::PauseAnywhereCacheRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PauseAnywhereCache(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::PauseAnywhereCacheRequest const&
                 request) {
        return stub_->PauseAnywhereCache(context, options, request);
      },
      *current, request_copy, __func__);
}

StatusOr<google::storage::control::v2::AnywhereCache>
StorageControlConnectionImpl::ResumeAnywhereCache(
    google::storage::control::v2::ResumeAnywhereCacheRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ResumeAnywhereCache(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::ResumeAnywhereCacheRequest const&
                 request) {
        return stub_->ResumeAnywhereCache(context, options, request);
      },
      *current, request_copy, __func__);
}

StatusOr<google::storage::control::v2::AnywhereCache>
StorageControlConnectionImpl::GetAnywhereCache(
    google::storage::control::v2::GetAnywhereCacheRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAnywhereCache(request_copy),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::GetAnywhereCacheRequest const&
                 request) {
        return stub_->GetAnywhereCache(context, options, request);
      },
      *current, request_copy, __func__);
}

StreamRange<google::storage::control::v2::AnywhereCache>
StorageControlConnectionImpl::ListAnywhereCaches(
    google::storage::control::v2::ListAnywhereCachesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAnywhereCaches(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::storage::control::v2::AnywhereCache>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<storagecontrol_v2::StorageControlRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::storage::control::v2::ListAnywhereCachesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::storage::control::v2::ListAnywhereCachesRequest const&
                    request) {
              return stub->ListAnywhereCaches(context, options, request);
            },
            options, r, function_name);
      },
      [](google::storage::control::v2::ListAnywhereCachesResponse r) {
        std::vector<google::storage::control::v2::AnywhereCache> result(
            r.anywhere_caches().size());
        auto& messages = *r.mutable_anywhere_caches();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::storage::control::v2::IntelligenceConfig>
StorageControlConnectionImpl::GetProjectIntelligenceConfig(
    google::storage::control::v2::GetProjectIntelligenceConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetProjectIntelligenceConfig(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::
                 GetProjectIntelligenceConfigRequest const& request) {
        return stub_->GetProjectIntelligenceConfig(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::storage::control::v2::IntelligenceConfig>
StorageControlConnectionImpl::UpdateProjectIntelligenceConfig(
    google::storage::control::v2::UpdateProjectIntelligenceConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateProjectIntelligenceConfig(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::
                 UpdateProjectIntelligenceConfigRequest const& request) {
        return stub_->UpdateProjectIntelligenceConfig(context, options,
                                                      request);
      },
      *current, request, __func__);
}

StatusOr<google::storage::control::v2::IntelligenceConfig>
StorageControlConnectionImpl::GetFolderIntelligenceConfig(
    google::storage::control::v2::GetFolderIntelligenceConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetFolderIntelligenceConfig(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::
                 GetFolderIntelligenceConfigRequest const& request) {
        return stub_->GetFolderIntelligenceConfig(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::storage::control::v2::IntelligenceConfig>
StorageControlConnectionImpl::UpdateFolderIntelligenceConfig(
    google::storage::control::v2::UpdateFolderIntelligenceConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateFolderIntelligenceConfig(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::
                 UpdateFolderIntelligenceConfigRequest const& request) {
        return stub_->UpdateFolderIntelligenceConfig(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::storage::control::v2::IntelligenceConfig>
StorageControlConnectionImpl::GetOrganizationIntelligenceConfig(
    google::storage::control::v2::
        GetOrganizationIntelligenceConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOrganizationIntelligenceConfig(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::
                 GetOrganizationIntelligenceConfigRequest const& request) {
        return stub_->GetOrganizationIntelligenceConfig(context, options,
                                                        request);
      },
      *current, request, __func__);
}

StatusOr<google::storage::control::v2::IntelligenceConfig>
StorageControlConnectionImpl::UpdateOrganizationIntelligenceConfig(
    google::storage::control::v2::
        UpdateOrganizationIntelligenceConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateOrganizationIntelligenceConfig(
          request),
      [this](grpc::ClientContext& context, Options const& options,
             google::storage::control::v2::
                 UpdateOrganizationIntelligenceConfigRequest const& request) {
        return stub_->UpdateOrganizationIntelligenceConfig(context, options,
                                                           request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_internal
}  // namespace cloud
}  // namespace google
