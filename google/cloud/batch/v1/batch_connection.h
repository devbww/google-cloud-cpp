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
// source: google/cloud/batch/v1/batch.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_H

#include "google/cloud/batch/v1/batch_connection_idempotency_policy.h"
#include "google/cloud/batch/v1/internal/batch_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/batch/v1/batch.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace batch_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `BatchServiceConnection`.
class BatchServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<BatchServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `BatchServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class BatchServiceLimitedErrorCountRetryPolicy
    : public BatchServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit BatchServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  BatchServiceLimitedErrorCountRetryPolicy(
      BatchServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : BatchServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  BatchServiceLimitedErrorCountRetryPolicy(
      BatchServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : BatchServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<BatchServiceRetryPolicy> clone() const override {
    return std::make_unique<BatchServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = BatchServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      batch_v1_internal::BatchServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `BatchServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class BatchServiceLimitedTimeRetryPolicy : public BatchServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit BatchServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  BatchServiceLimitedTimeRetryPolicy(
      BatchServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : BatchServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  BatchServiceLimitedTimeRetryPolicy(
      BatchServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : BatchServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<BatchServiceRetryPolicy> clone() const override {
    return std::make_unique<BatchServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = BatchServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      batch_v1_internal::BatchServiceRetryTraits>
      impl_;
};

/**
 * The `BatchServiceConnection` object for `BatchServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `BatchServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `BatchServiceClient`.
 *
 * To create a concrete instance, see `MakeBatchServiceConnection()`.
 *
 * For mocking, see `batch_v1_mocks::MockBatchServiceConnection`.
 */
class BatchServiceConnection {
 public:
  virtual ~BatchServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::batch::v1::Job> CreateJob(
      google::cloud::batch::v1::CreateJobRequest const& request);

  virtual StatusOr<google::cloud::batch::v1::Job> GetJob(
      google::cloud::batch::v1::GetJobRequest const& request);

  virtual future<StatusOr<google::cloud::batch::v1::OperationMetadata>>
  DeleteJob(google::cloud::batch::v1::DeleteJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteJob(
      NoAwaitTag, google::cloud::batch::v1::DeleteJobRequest const& request);

  virtual future<StatusOr<google::cloud::batch::v1::OperationMetadata>>
  DeleteJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::batch::v1::CancelJobResponse>>
  CancelJob(google::cloud::batch::v1::CancelJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CancelJob(
      NoAwaitTag, google::cloud::batch::v1::CancelJobRequest const& request);

  virtual future<StatusOr<google::cloud::batch::v1::CancelJobResponse>>
  CancelJob(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::batch::v1::Job> ListJobs(
      google::cloud::batch::v1::ListJobsRequest request);

  virtual StatusOr<google::cloud::batch::v1::Task> GetTask(
      google::cloud::batch::v1::GetTaskRequest const& request);

  virtual StreamRange<google::cloud::batch::v1::Task> ListTasks(
      google::cloud::batch::v1::ListTasksRequest request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `BatchServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of BatchServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `BatchServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::batch_v1::BatchServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `BatchServiceConnection` created by
 * this function.
 */
std::shared_ptr<BatchServiceConnection> MakeBatchServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_H
