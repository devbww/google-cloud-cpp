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
// source: google/cloud/connectors/v1/connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_MOCKS_MOCK_CONNECTORS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_MOCKS_MOCK_CONNECTORS_CONNECTION_H

#include "google/cloud/connectors/v1/connectors_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace connectors_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ConnectorsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ConnectorsClient`. To do so,
 * construct an object of type `ConnectorsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockConnectorsConnection : public connectors_v1::ConnectorsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::connectors::v1::Connection>),
              ListConnections,
              (google::cloud::connectors::v1::ListConnectionsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::connectors::v1::Connection>, GetConnection,
      (google::cloud::connectors::v1::GetConnectionRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConnection(Matcher<google::cloud::connectors::v1::CreateConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::connectors::v1::Connection>>,
      CreateConnection,
      (google::cloud::connectors::v1::CreateConnectionRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateConnection,
      (NoAwaitTag,
       google::cloud::connectors::v1::CreateConnectionRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::connectors::v1::Connection>>,
              CreateConnection,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateConnection(Matcher<google::cloud::connectors::v1::UpdateConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::connectors::v1::Connection>>,
      UpdateConnection,
      (google::cloud::connectors::v1::UpdateConnectionRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateConnection,
      (NoAwaitTag,
       google::cloud::connectors::v1::UpdateConnectionRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::connectors::v1::Connection>>,
              UpdateConnection,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConnection(Matcher<google::cloud::connectors::v1::DeleteConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>,
      DeleteConnection,
      (google::cloud::connectors::v1::DeleteConnectionRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteConnection,
      (NoAwaitTag,
       google::cloud::connectors::v1::DeleteConnectionRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>,
      DeleteConnection, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::connectors::v1::Provider>),
              ListProviders,
              (google::cloud::connectors::v1::ListProvidersRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::connectors::v1::Provider>, GetProvider,
      (google::cloud::connectors::v1::GetProviderRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::connectors::v1::Connector>),
              ListConnectors,
              (google::cloud::connectors::v1::ListConnectorsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::connectors::v1::Connector>, GetConnector,
      (google::cloud::connectors::v1::GetConnectorRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::connectors::v1::ConnectorVersion>),
      ListConnectorVersions,
      (google::cloud::connectors::v1::ListConnectorVersionsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::connectors::v1::ConnectorVersion>,
              GetConnectorVersion,
              (google::cloud::connectors::v1::GetConnectorVersionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>,
      GetConnectionSchemaMetadata,
      (google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RefreshConnectionSchemaMetadata(Matcher<google::cloud::connectors::v1::RefreshConnectionSchemaMetadataRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>>,
      RefreshConnectionSchemaMetadata,
      (google::cloud::connectors::v1::
           RefreshConnectionSchemaMetadataRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RefreshConnectionSchemaMetadata(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              RefreshConnectionSchemaMetadata,
              (NoAwaitTag,
               google::cloud::connectors::v1::
                   RefreshConnectionSchemaMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RefreshConnectionSchemaMetadata(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>>,
      RefreshConnectionSchemaMetadata,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>),
      ListRuntimeEntitySchemas,
      (google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>),
      ListRuntimeActionSchemas,
      (google::cloud::connectors::v1::ListRuntimeActionSchemasRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::connectors::v1::RuntimeConfig>, GetRuntimeConfig,
      (google::cloud::connectors::v1::GetRuntimeConfigRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::connectors::v1::Settings>, GetGlobalSettings,
      (google::cloud::connectors::v1::GetGlobalSettingsRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
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
}  // namespace connectors_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_MOCKS_MOCK_CONNECTORS_CONNECTION_H
