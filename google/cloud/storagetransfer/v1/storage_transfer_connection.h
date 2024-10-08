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
// source: google/storagetransfer/v1/transfer.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CONNECTION_H

#include "google/cloud/storagetransfer/v1/internal/storage_transfer_retry_traits.h"
#include "google/cloud/storagetransfer/v1/storage_transfer_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/storagetransfer/v1/transfer.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `StorageTransferServiceConnection`.
class StorageTransferServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<StorageTransferServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `StorageTransferServiceConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class StorageTransferServiceLimitedErrorCountRetryPolicy
    : public StorageTransferServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit StorageTransferServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  StorageTransferServiceLimitedErrorCountRetryPolicy(
      StorageTransferServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : StorageTransferServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  StorageTransferServiceLimitedErrorCountRetryPolicy(
      StorageTransferServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : StorageTransferServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<StorageTransferServiceRetryPolicy> clone() const override {
    return std::make_unique<StorageTransferServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = StorageTransferServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      storagetransfer_v1_internal::StorageTransferServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `StorageTransferServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class StorageTransferServiceLimitedTimeRetryPolicy
    : public StorageTransferServiceRetryPolicy {
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
  explicit StorageTransferServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  StorageTransferServiceLimitedTimeRetryPolicy(
      StorageTransferServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : StorageTransferServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  StorageTransferServiceLimitedTimeRetryPolicy(
      StorageTransferServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : StorageTransferServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<StorageTransferServiceRetryPolicy> clone() const override {
    return std::make_unique<StorageTransferServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = StorageTransferServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      storagetransfer_v1_internal::StorageTransferServiceRetryTraits>
      impl_;
};

/**
 * The `StorageTransferServiceConnection` object for
 * `StorageTransferServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `StorageTransferServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `StorageTransferServiceClient`.
 *
 * To create a concrete instance, see `MakeStorageTransferServiceConnection()`.
 *
 * For mocking, see
 * `storagetransfer_v1_mocks::MockStorageTransferServiceConnection`.
 */
class StorageTransferServiceConnection {
 public:
  virtual ~StorageTransferServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
  GetGoogleServiceAccount(
      google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
          request);

  virtual StatusOr<google::storagetransfer::v1::TransferJob> CreateTransferJob(
      google::storagetransfer::v1::CreateTransferJobRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::TransferJob> UpdateTransferJob(
      google::storagetransfer::v1::UpdateTransferJobRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::TransferJob> GetTransferJob(
      google::storagetransfer::v1::GetTransferJobRequest const& request);

  virtual StreamRange<google::storagetransfer::v1::TransferJob>
  ListTransferJobs(
      google::storagetransfer::v1::ListTransferJobsRequest request);

  virtual Status PauseTransferOperation(
      google::storagetransfer::v1::PauseTransferOperationRequest const&
          request);

  virtual Status ResumeTransferOperation(
      google::storagetransfer::v1::ResumeTransferOperationRequest const&
          request);

  virtual future<StatusOr<google::storagetransfer::v1::TransferOperation>>
  RunTransferJob(
      google::storagetransfer::v1::RunTransferJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RunTransferJob(
      NoAwaitTag,
      google::storagetransfer::v1::RunTransferJobRequest const& request);

  virtual future<StatusOr<google::storagetransfer::v1::TransferOperation>>
  RunTransferJob(google::longrunning::Operation const& operation);

  virtual Status DeleteTransferJob(
      google::storagetransfer::v1::DeleteTransferJobRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::AgentPool> CreateAgentPool(
      google::storagetransfer::v1::CreateAgentPoolRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::AgentPool> UpdateAgentPool(
      google::storagetransfer::v1::UpdateAgentPoolRequest const& request);

  virtual StatusOr<google::storagetransfer::v1::AgentPool> GetAgentPool(
      google::storagetransfer::v1::GetAgentPoolRequest const& request);

  virtual StreamRange<google::storagetransfer::v1::AgentPool> ListAgentPools(
      google::storagetransfer::v1::ListAgentPoolsRequest request);

  virtual Status DeleteAgentPool(
      google::storagetransfer::v1::DeleteAgentPoolRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `StorageTransferServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * StorageTransferServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `StorageTransferServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::storagetransfer_v1::StorageTransferServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `StorageTransferServiceConnection`
 * created by this function.
 */
std::shared_ptr<StorageTransferServiceConnection>
MakeStorageTransferServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_STORAGE_TRANSFER_CONNECTION_H
