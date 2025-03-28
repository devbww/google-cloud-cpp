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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#include "google/cloud/contactcenterinsights/v1/contact_center_insights_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace contactcenterinsights_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ContactCenterInsightsConnectionIdempotencyPolicy::
    ~ContactCenterInsightsConnectionIdempotencyPolicy() = default;

std::unique_ptr<ContactCenterInsightsConnectionIdempotencyPolicy>
ContactCenterInsightsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ContactCenterInsightsConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::CreateConversation(
    google::cloud::contactcenterinsights::v1::
        CreateConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::UploadConversation(
    google::cloud::contactcenterinsights::v1::
        UploadConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::UpdateConversation(
    google::cloud::contactcenterinsights::v1::
        UpdateConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetConversation(
    google::cloud::contactcenterinsights::v1::GetConversationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListConversations(
    google::cloud::contactcenterinsights::v1::
        ListConversationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::DeleteConversation(
    google::cloud::contactcenterinsights::v1::
        DeleteConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::CreateAnalysis(
    google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetAnalysis(
    google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListAnalyses(
    google::cloud::contactcenterinsights::v1::ListAnalysesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::DeleteAnalysis(
    google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::BulkAnalyzeConversations(
    google::cloud::contactcenterinsights::v1::
        BulkAnalyzeConversationsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::BulkDeleteConversations(
    google::cloud::contactcenterinsights::v1::
        BulkDeleteConversationsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::IngestConversations(
    google::cloud::contactcenterinsights::v1::
        IngestConversationsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::ExportInsightsData(
    google::cloud::contactcenterinsights::v1::
        ExportInsightsDataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::CreateIssueModel(
    google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::UpdateIssueModel(
    google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetIssueModel(
    google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListIssueModels(
    google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::DeleteIssueModel(
    google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::DeployIssueModel(
    google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::UndeployIssueModel(
    google::cloud::contactcenterinsights::v1::
        UndeployIssueModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ExportIssueModel(
    google::cloud::contactcenterinsights::v1::ExportIssueModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ImportIssueModel(
    google::cloud::contactcenterinsights::v1::ImportIssueModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetIssue(
    google::cloud::contactcenterinsights::v1::GetIssueRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListIssues(
    google::cloud::contactcenterinsights::v1::ListIssuesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::UpdateIssue(
    google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::DeleteIssue(
    google::cloud::contactcenterinsights::v1::DeleteIssueRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::CalculateIssueModelStats(
    google::cloud::contactcenterinsights::v1::
        CalculateIssueModelStatsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::CreatePhraseMatcher(
    google::cloud::contactcenterinsights::v1::
        CreatePhraseMatcherRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetPhraseMatcher(
    google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::ListPhraseMatchers(
    google::cloud::contactcenterinsights::v1::
        ListPhraseMatchersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::DeletePhraseMatcher(
    google::cloud::contactcenterinsights::v1::
        DeletePhraseMatcherRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::UpdatePhraseMatcher(
    google::cloud::contactcenterinsights::v1::
        UpdatePhraseMatcherRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::CalculateStats(
    google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetSettings(
    google::cloud::contactcenterinsights::v1::GetSettingsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::UpdateSettings(
    google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::CreateAnalysisRule(
    google::cloud::contactcenterinsights::v1::
        CreateAnalysisRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetAnalysisRule(
    google::cloud::contactcenterinsights::v1::GetAnalysisRuleRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListAnalysisRules(
    google::cloud::contactcenterinsights::v1::
        ListAnalysisRulesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::UpdateAnalysisRule(
    google::cloud::contactcenterinsights::v1::
        UpdateAnalysisRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::DeleteAnalysisRule(
    google::cloud::contactcenterinsights::v1::
        DeleteAnalysisRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetEncryptionSpec(
    google::cloud::contactcenterinsights::v1::GetEncryptionSpecRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::InitializeEncryptionSpec(
    google::cloud::contactcenterinsights::v1::
        InitializeEncryptionSpecRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::CreateView(
    google::cloud::contactcenterinsights::v1::CreateViewRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetView(
    google::cloud::contactcenterinsights::v1::GetViewRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListViews(
    google::cloud::contactcenterinsights::v1::ListViewsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::UpdateView(
    google::cloud::contactcenterinsights::v1::UpdateViewRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::DeleteView(
    google::cloud::contactcenterinsights::v1::DeleteViewRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::QueryMetrics(
    google::cloud::contactcenterinsights::v1::QueryMetricsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::CreateQaQuestion(
    google::cloud::contactcenterinsights::v1::CreateQaQuestionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetQaQuestion(
    google::cloud::contactcenterinsights::v1::GetQaQuestionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::UpdateQaQuestion(
    google::cloud::contactcenterinsights::v1::UpdateQaQuestionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::DeleteQaQuestion(
    google::cloud::contactcenterinsights::v1::DeleteQaQuestionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListQaQuestions(
    google::cloud::contactcenterinsights::v1::
        ListQaQuestionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::CreateQaScorecard(
    google::cloud::contactcenterinsights::v1::CreateQaScorecardRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetQaScorecard(
    google::cloud::contactcenterinsights::v1::GetQaScorecardRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::UpdateQaScorecard(
    google::cloud::contactcenterinsights::v1::UpdateQaScorecardRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::DeleteQaScorecard(
    google::cloud::contactcenterinsights::v1::DeleteQaScorecardRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListQaScorecards(
    google::cloud::contactcenterinsights::v1::
        ListQaScorecardsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::CreateQaScorecardRevision(
    google::cloud::contactcenterinsights::v1::
        CreateQaScorecardRevisionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::GetQaScorecardRevision(
    google::cloud::contactcenterinsights::v1::
        GetQaScorecardRevisionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::TuneQaScorecardRevision(
    google::cloud::contactcenterinsights::v1::
        TuneQaScorecardRevisionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::DeployQaScorecardRevision(
    google::cloud::contactcenterinsights::v1::
        DeployQaScorecardRevisionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::UndeployQaScorecardRevision(
    google::cloud::contactcenterinsights::v1::
        UndeployQaScorecardRevisionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::DeleteQaScorecardRevision(
    google::cloud::contactcenterinsights::v1::
        DeleteQaScorecardRevisionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::ListQaScorecardRevisions(
    google::cloud::contactcenterinsights::v1::
        ListQaScorecardRevisionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::CreateFeedbackLabel(
    google::cloud::contactcenterinsights::v1::
        CreateFeedbackLabelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::ListFeedbackLabels(
    google::cloud::contactcenterinsights::v1::
        ListFeedbackLabelsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetFeedbackLabel(
    google::cloud::contactcenterinsights::v1::GetFeedbackLabelRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::UpdateFeedbackLabel(
    google::cloud::contactcenterinsights::v1::
        UpdateFeedbackLabelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::DeleteFeedbackLabel(
    google::cloud::contactcenterinsights::v1::
        DeleteFeedbackLabelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::ListAllFeedbackLabels(
    google::cloud::contactcenterinsights::v1::
        ListAllFeedbackLabelsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::BulkUploadFeedbackLabels(
    google::cloud::contactcenterinsights::v1::
        BulkUploadFeedbackLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ContactCenterInsightsConnectionIdempotencyPolicy::BulkDownloadFeedbackLabels(
    google::cloud::contactcenterinsights::v1::
        BulkDownloadFeedbackLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContactCenterInsightsConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ContactCenterInsightsConnectionIdempotencyPolicy>
MakeDefaultContactCenterInsightsConnectionIdempotencyPolicy() {
  return std::make_unique<ContactCenterInsightsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights_v1
}  // namespace cloud
}  // namespace google
