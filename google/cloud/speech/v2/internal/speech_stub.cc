// Copyright 2022 Google LLC
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
// source: google/cloud/speech/v2/cloud_speech.proto

#include "google/cloud/speech/v2/internal/speech_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/status_or.h"
#include <google/cloud/speech/v2/cloud_speech.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpeechStub::~SpeechStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncCreateRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::CreateRecognizerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::CreateRecognizerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::CreateRecognizerRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRecognizer(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::CreateRecognizer(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::CreateRecognizerRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateRecognizer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::ListRecognizersResponse>
DefaultSpeechStub::ListRecognizers(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::ListRecognizersRequest const& request) {
  google::cloud::speech::v2::ListRecognizersResponse response;
  auto status = grpc_stub_->ListRecognizers(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::Recognizer>
DefaultSpeechStub::GetRecognizer(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::GetRecognizerRequest const& request) {
  google::cloud::speech::v2::Recognizer response;
  auto status = grpc_stub_->GetRecognizer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncUpdateRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::UpdateRecognizerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::UpdateRecognizerRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateRecognizer(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::UpdateRecognizer(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateRecognizer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncDeleteRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::DeleteRecognizerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::DeleteRecognizerRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRecognizer(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::DeleteRecognizer(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteRecognizer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncUndeleteRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::UndeleteRecognizerRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::speech::v2::UndeleteRecognizerRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeleteRecognizer(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::UndeleteRecognizer(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UndeleteRecognizer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::RecognizeResponse>
DefaultSpeechStub::Recognize(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::RecognizeRequest const& request) {
  google::cloud::speech::v2::RecognizeResponse response;
  auto status = grpc_stub_->Recognize(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v2::StreamingRecognizeRequest,
    google::cloud::speech::v2::StreamingRecognizeResponse>>
DefaultSpeechStub::AsyncStreamingRecognize(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<
      google::cloud::speech::v2::StreamingRecognizeRequest,
      google::cloud::speech::v2::StreamingRecognizeResponse>(
      cq, std::move(context), std::move(options),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncStreamingRecognize(context, cq);
      });
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncBatchRecognize(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::BatchRecognizeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::BatchRecognizeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::BatchRecognizeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchRecognize(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::BatchRecognize(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::BatchRecognizeRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->BatchRecognize(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::Config> DefaultSpeechStub::GetConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::GetConfigRequest const& request) {
  google::cloud::speech::v2::Config response;
  auto status = grpc_stub_->GetConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::Config> DefaultSpeechStub::UpdateConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::UpdateConfigRequest const& request) {
  google::cloud::speech::v2::Config response;
  auto status = grpc_stub_->UpdateConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncCreateCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::CreateCustomClassRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::CreateCustomClassRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::CreateCustomClassRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCustomClass(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::CreateCustomClass(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::CreateCustomClassRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateCustomClass(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::ListCustomClassesResponse>
DefaultSpeechStub::ListCustomClasses(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::ListCustomClassesRequest const& request) {
  google::cloud::speech::v2::ListCustomClassesResponse response;
  auto status = grpc_stub_->ListCustomClasses(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::CustomClass>
DefaultSpeechStub::GetCustomClass(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::GetCustomClassRequest const& request) {
  google::cloud::speech::v2::CustomClass response;
  auto status = grpc_stub_->GetCustomClass(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncUpdateCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::UpdateCustomClassRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::UpdateCustomClassRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCustomClass(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::UpdateCustomClass(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateCustomClass(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncDeleteCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::DeleteCustomClassRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::DeleteCustomClassRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCustomClass(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::DeleteCustomClass(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteCustomClass(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncUndeleteCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::UndeleteCustomClassRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::speech::v2::UndeleteCustomClassRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeleteCustomClass(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::UndeleteCustomClass(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UndeleteCustomClass(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncCreatePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::CreatePhraseSetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::CreatePhraseSetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreatePhraseSet(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::CreatePhraseSet(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreatePhraseSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::ListPhraseSetsResponse>
DefaultSpeechStub::ListPhraseSets(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::ListPhraseSetsRequest const& request) {
  google::cloud::speech::v2::ListPhraseSetsResponse response;
  auto status = grpc_stub_->ListPhraseSets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::speech::v2::PhraseSet> DefaultSpeechStub::GetPhraseSet(
    grpc::ClientContext& context, Options const&,
    google::cloud::speech::v2::GetPhraseSetRequest const& request) {
  google::cloud::speech::v2::PhraseSet response;
  auto status = grpc_stub_->GetPhraseSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncUpdatePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::UpdatePhraseSetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::UpdatePhraseSetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdatePhraseSet(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::UpdatePhraseSet(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdatePhraseSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncDeletePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::DeletePhraseSetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::DeletePhraseSetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeletePhraseSet(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::DeletePhraseSet(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeletePhraseSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncUndeletePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v2::UndeletePhraseSetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::speech::v2::UndeletePhraseSetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeletePhraseSet(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::UndeletePhraseSet(
    grpc::ClientContext& context, Options,
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UndeletePhraseSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultSpeechStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultSpeechStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultSpeechStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultSpeechStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSpeechStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultSpeechStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultSpeechStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google
