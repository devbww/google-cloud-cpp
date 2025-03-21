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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/internal/conversations_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/conversation.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationsStub::~ConversationsStub() = default;

StatusOr<google::cloud::dialogflow::v2::Conversation>
DefaultConversationsStub::CreateConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::CreateConversationRequest const& request) {
  google::cloud::dialogflow::v2::Conversation response;
  auto status = grpc_stub_->CreateConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::ListConversationsResponse>
DefaultConversationsStub::ListConversations(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::ListConversationsRequest const& request) {
  google::cloud::dialogflow::v2::ListConversationsResponse response;
  auto status = grpc_stub_->ListConversations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
DefaultConversationsStub::GetConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GetConversationRequest const& request) {
  google::cloud::dialogflow::v2::Conversation response;
  auto status = grpc_stub_->GetConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
DefaultConversationsStub::CompleteConversation(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::CompleteConversationRequest const& request) {
  google::cloud::dialogflow::v2::Conversation response;
  auto status = grpc_stub_->CompleteConversation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::IngestContextReferencesResponse>
DefaultConversationsStub::IngestContextReferences(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::IngestContextReferencesRequest const&
        request) {
  google::cloud::dialogflow::v2::IngestContextReferencesResponse response;
  auto status =
      grpc_stub_->IngestContextReferences(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::ListMessagesResponse>
DefaultConversationsStub::ListMessages(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::ListMessagesRequest const& request) {
  google::cloud::dialogflow::v2::ListMessagesResponse response;
  auto status = grpc_stub_->ListMessages(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
DefaultConversationsStub::SuggestConversationSummary(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
        request) {
  google::cloud::dialogflow::v2::SuggestConversationSummaryResponse response;
  auto status =
      grpc_stub_->SuggestConversationSummary(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
DefaultConversationsStub::GenerateStatelessSummary(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
        request) {
  google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse response;
  auto status =
      grpc_stub_->GenerateStatelessSummary(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse>
DefaultConversationsStub::GenerateStatelessSuggestion(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&
        request) {
  google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse response;
  auto status =
      grpc_stub_->GenerateStatelessSuggestion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
DefaultConversationsStub::SearchKnowledge(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::SearchKnowledgeRequest const& request) {
  google::cloud::dialogflow::v2::SearchKnowledgeResponse response;
  auto status = grpc_stub_->SearchKnowledge(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::GenerateSuggestionsResponse>
DefaultConversationsStub::GenerateSuggestions(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GenerateSuggestionsRequest const& request) {
  google::cloud::dialogflow::v2::GenerateSuggestionsResponse response;
  auto status = grpc_stub_->GenerateSuggestions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultConversationsStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultConversationsStub::GetLocation(
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
DefaultConversationsStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultConversationsStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultConversationsStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
