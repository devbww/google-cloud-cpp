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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_MOCKS_MOCK_CERTIFICATE_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_MOCKS_MOCK_CERTIFICATE_MANAGER_CONNECTION_H

#include "google/cloud/certificatemanager/v1/certificate_manager_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace certificatemanager_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CertificateManagerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CertificateManagerClient`. To do
 * so, construct an object of type `CertificateManagerClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockCertificateManagerConnection
    : public certificatemanager_v1::CertificateManagerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::certificatemanager::v1::Certificate>),
      ListCertificates,
      (google::cloud::certificatemanager::v1::ListCertificatesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::Certificate>,
      GetCertificate,
      (google::cloud::certificatemanager::v1::GetCertificateRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCertificate(Matcher<google::cloud::certificatemanager::v1::CreateCertificateRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>,
      CreateCertificate,
      (google::cloud::certificatemanager::v1::CreateCertificateRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCertificate(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCertificate,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::CreateCertificateRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCertificate(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>,
      CreateCertificate, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCertificate(Matcher<google::cloud::certificatemanager::v1::UpdateCertificateRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>,
      UpdateCertificate,
      (google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateCertificate(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateCertificate,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCertificate(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>,
      UpdateCertificate, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCertificate(Matcher<google::cloud::certificatemanager::v1::DeleteCertificateRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificate,
      (google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteCertificate(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteCertificate,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCertificate(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificate, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::certificatemanager::v1::CertificateMap>),
      ListCertificateMaps,
      (google::cloud::certificatemanager::v1::ListCertificateMapsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::CertificateMap>,
      GetCertificateMap,
      (google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCertificateMap(Matcher<google::cloud::certificatemanager::v1::CreateCertificateMapRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>,
      CreateCertificateMap,
      (google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCertificateMap(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCertificateMap,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCertificateMap(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>,
      CreateCertificateMap, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCertificateMap(Matcher<google::cloud::certificatemanager::v1::UpdateCertificateMapRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>,
      UpdateCertificateMap,
      (google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateCertificateMap(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateCertificateMap,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCertificateMap(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>,
      UpdateCertificateMap, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCertificateMap(Matcher<google::cloud::certificatemanager::v1::DeleteCertificateMapRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateMap,
      (google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteCertificateMap(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteCertificateMap,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCertificateMap(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateMap, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::certificatemanager::v1::CertificateMapEntry>),
      ListCertificateMapEntries,
      (google::cloud::certificatemanager::v1::ListCertificateMapEntriesRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>,
      GetCertificateMapEntry,
      (google::cloud::certificatemanager::v1::
           GetCertificateMapEntryRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCertificateMapEntry(Matcher<google::cloud::certificatemanager::v1::CreateCertificateMapEntryRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>,
      CreateCertificateMapEntry,
      (google::cloud::certificatemanager::v1::
           CreateCertificateMapEntryRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCertificateMapEntry(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              CreateCertificateMapEntry,
              (NoAwaitTag, google::cloud::certificatemanager::v1::
                               CreateCertificateMapEntryRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCertificateMapEntry(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>,
      CreateCertificateMapEntry,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCertificateMapEntry(Matcher<google::cloud::certificatemanager::v1::UpdateCertificateMapEntryRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>,
      UpdateCertificateMapEntry,
      (google::cloud::certificatemanager::v1::
           UpdateCertificateMapEntryRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateCertificateMapEntry(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              UpdateCertificateMapEntry,
              (NoAwaitTag, google::cloud::certificatemanager::v1::
                               UpdateCertificateMapEntryRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCertificateMapEntry(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>,
      UpdateCertificateMapEntry,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCertificateMapEntry(Matcher<google::cloud::certificatemanager::v1::DeleteCertificateMapEntryRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateMapEntry,
      (google::cloud::certificatemanager::v1::
           DeleteCertificateMapEntryRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteCertificateMapEntry(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              DeleteCertificateMapEntry,
              (NoAwaitTag, google::cloud::certificatemanager::v1::
                               DeleteCertificateMapEntryRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCertificateMapEntry(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateMapEntry,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>),
      ListDnsAuthorizations,
      (google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>,
      GetDnsAuthorization,
      (google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateDnsAuthorization(Matcher<google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>,
      CreateDnsAuthorization,
      (google::cloud::certificatemanager::v1::
           CreateDnsAuthorizationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateDnsAuthorization(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateDnsAuthorization,
              (NoAwaitTag, google::cloud::certificatemanager::v1::
                               CreateDnsAuthorizationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateDnsAuthorization(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>,
      CreateDnsAuthorization, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateDnsAuthorization(Matcher<google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>,
      UpdateDnsAuthorization,
      (google::cloud::certificatemanager::v1::
           UpdateDnsAuthorizationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateDnsAuthorization(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateDnsAuthorization,
              (NoAwaitTag, google::cloud::certificatemanager::v1::
                               UpdateDnsAuthorizationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateDnsAuthorization(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>,
      UpdateDnsAuthorization, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteDnsAuthorization(Matcher<google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteDnsAuthorization,
      (google::cloud::certificatemanager::v1::
           DeleteDnsAuthorizationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteDnsAuthorization(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteDnsAuthorization,
              (NoAwaitTag, google::cloud::certificatemanager::v1::
                               DeleteDnsAuthorizationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteDnsAuthorization(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteDnsAuthorization, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<
          google::cloud::certificatemanager::v1::CertificateIssuanceConfig>),
      ListCertificateIssuanceConfigs,
      (google::cloud::certificatemanager::v1::
           ListCertificateIssuanceConfigsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::certificatemanager::v1::CertificateIssuanceConfig>,
      GetCertificateIssuanceConfig,
      (google::cloud::certificatemanager::v1::
           GetCertificateIssuanceConfigRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCertificateIssuanceConfig(Matcher<google::cloud::certificatemanager::v1::CreateCertificateIssuanceConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>,
      CreateCertificateIssuanceConfig,
      (google::cloud::certificatemanager::v1::
           CreateCertificateIssuanceConfigRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCertificateIssuanceConfig(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              CreateCertificateIssuanceConfig,
              (NoAwaitTag,
               google::cloud::certificatemanager::v1::
                   CreateCertificateIssuanceConfigRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCertificateIssuanceConfig(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>,
      CreateCertificateIssuanceConfig,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCertificateIssuanceConfig(Matcher<google::cloud::certificatemanager::v1::DeleteCertificateIssuanceConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateIssuanceConfig,
      (google::cloud::certificatemanager::v1::
           DeleteCertificateIssuanceConfigRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteCertificateIssuanceConfig(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              DeleteCertificateIssuanceConfig,
              (NoAwaitTag,
               google::cloud::certificatemanager::v1::
                   DeleteCertificateIssuanceConfigRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCertificateIssuanceConfig(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateIssuanceConfig,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::certificatemanager::v1::TrustConfig>),
      ListTrustConfigs,
      (google::cloud::certificatemanager::v1::ListTrustConfigsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::TrustConfig>,
      GetTrustConfig,
      (google::cloud::certificatemanager::v1::GetTrustConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateTrustConfig(Matcher<google::cloud::certificatemanager::v1::CreateTrustConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::TrustConfig>>,
      CreateTrustConfig,
      (google::cloud::certificatemanager::v1::CreateTrustConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateTrustConfig(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateTrustConfig,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::CreateTrustConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateTrustConfig(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::TrustConfig>>,
      CreateTrustConfig, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateTrustConfig(Matcher<google::cloud::certificatemanager::v1::UpdateTrustConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::TrustConfig>>,
      UpdateTrustConfig,
      (google::cloud::certificatemanager::v1::UpdateTrustConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateTrustConfig(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateTrustConfig,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::UpdateTrustConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateTrustConfig(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::TrustConfig>>,
      UpdateTrustConfig, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteTrustConfig(Matcher<google::cloud::certificatemanager::v1::DeleteTrustConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteTrustConfig,
      (google::cloud::certificatemanager::v1::DeleteTrustConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteTrustConfig(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteTrustConfig,
      (NoAwaitTag,
       google::cloud::certificatemanager::v1::DeleteTrustConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteTrustConfig(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteTrustConfig, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteOperation,
              (google::longrunning::DeleteOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_MOCKS_MOCK_CERTIFICATE_MANAGER_CONNECTION_H
