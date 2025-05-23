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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_RESERVATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_RESERVATION_CONNECTION_H

#include "google/cloud/bigquery/reservation/v1/internal/reservation_retry_traits.h"
#include "google/cloud/bigquery/reservation/v1/reservation_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/reservation/v1/reservation.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_reservation_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ReservationServiceConnection`.
class ReservationServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ReservationServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `ReservationServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ReservationServiceLimitedErrorCountRetryPolicy
    : public ReservationServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ReservationServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  ReservationServiceLimitedErrorCountRetryPolicy(
      ReservationServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : ReservationServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {
  }
  ReservationServiceLimitedErrorCountRetryPolicy(
      ReservationServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : ReservationServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {
  }

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ReservationServiceRetryPolicy> clone() const override {
    return std::make_unique<ReservationServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ReservationServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      bigquery_reservation_v1_internal::ReservationServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `ReservationServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ReservationServiceLimitedTimeRetryPolicy
    : public ReservationServiceRetryPolicy {
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
  explicit ReservationServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ReservationServiceLimitedTimeRetryPolicy(
      ReservationServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : ReservationServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  ReservationServiceLimitedTimeRetryPolicy(
      ReservationServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : ReservationServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<ReservationServiceRetryPolicy> clone() const override {
    return std::make_unique<ReservationServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ReservationServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      bigquery_reservation_v1_internal::ReservationServiceRetryTraits>
      impl_;
};

/**
 * The `ReservationServiceConnection` object for `ReservationServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ReservationServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ReservationServiceClient`.
 *
 * To create a concrete instance, see `MakeReservationServiceConnection()`.
 *
 * For mocking, see
 * `bigquery_reservation_v1_mocks::MockReservationServiceConnection`.
 */
class ReservationServiceConnection {
 public:
  virtual ~ReservationServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
  CreateReservation(
      google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::reservation::v1::Reservation>
  ListReservations(
      google::cloud::bigquery::reservation::v1::ListReservationsRequest
          request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
  GetReservation(
      google::cloud::bigquery::reservation::v1::GetReservationRequest const&
          request);

  virtual Status DeleteReservation(
      google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
          request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
  UpdateReservation(
      google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
          request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
  FailoverReservation(google::cloud::bigquery::reservation::v1::
                          FailoverReservationRequest const& request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
  CreateCapacityCommitment(google::cloud::bigquery::reservation::v1::
                               CreateCapacityCommitmentRequest const& request);

  virtual StreamRange<
      google::cloud::bigquery::reservation::v1::CapacityCommitment>
  ListCapacityCommitments(
      google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsRequest
          request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
  GetCapacityCommitment(google::cloud::bigquery::reservation::v1::
                            GetCapacityCommitmentRequest const& request);

  virtual Status DeleteCapacityCommitment(
      google::cloud::bigquery::reservation::v1::
          DeleteCapacityCommitmentRequest const& request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
  UpdateCapacityCommitment(google::cloud::bigquery::reservation::v1::
                               UpdateCapacityCommitmentRequest const& request);

  virtual StatusOr<
      google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse>
  SplitCapacityCommitment(google::cloud::bigquery::reservation::v1::
                              SplitCapacityCommitmentRequest const& request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
  MergeCapacityCommitments(google::cloud::bigquery::reservation::v1::
                               MergeCapacityCommitmentsRequest const& request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
  CreateAssignment(
      google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::reservation::v1::Assignment>
  ListAssignments(
      google::cloud::bigquery::reservation::v1::ListAssignmentsRequest request);

  virtual Status DeleteAssignment(
      google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::reservation::v1::Assignment>
  SearchAssignments(
      google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest
          request);

  virtual StreamRange<google::cloud::bigquery::reservation::v1::Assignment>
  SearchAllAssignments(
      google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest
          request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
  MoveAssignment(
      google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
          request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
  UpdateAssignment(
      google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
          request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
  GetBiReservation(
      google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
          request);

  virtual StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
  UpdateBiReservation(google::cloud::bigquery::reservation::v1::
                          UpdateBiReservationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ReservationServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ReservationServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ReservationServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::bigquery_reservation_v1::ReservationServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ReservationServiceConnection`
 * created by this function.
 */
std::shared_ptr<ReservationServiceConnection> MakeReservationServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_reservation_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_RESERVATION_CONNECTION_H
