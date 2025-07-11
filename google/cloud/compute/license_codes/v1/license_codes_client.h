// Copyright 2023 Google LLC
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
// source: google/cloud/compute/license_codes/v1/license_codes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSE_CODES_V1_LICENSE_CODES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSE_CODES_V1_LICENSE_CODES_CLIENT_H

#include "google/cloud/compute/license_codes/v1/license_codes_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_license_codes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the licenseCodes resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/licenseCodes
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class LicenseCodesClient {
 public:
  explicit LicenseCodesClient(
      std::shared_ptr<LicenseCodesConnection> connection, Options opts = {});
  ~LicenseCodesClient();

  ///@{
  /// @name Copy and move support
  LicenseCodesClient(LicenseCodesClient const&) = default;
  LicenseCodesClient& operator=(LicenseCodesClient const&) = default;
  LicenseCodesClient(LicenseCodesClient&&) = default;
  LicenseCodesClient& operator=(LicenseCodesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(LicenseCodesClient const& a,
                         LicenseCodesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(LicenseCodesClient const& a,
                         LicenseCodesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Return a specified license code. License codes are mirrored across all
  /// projects that have permissions to read the License Code. *Caution* This
  /// resource is intended for use only by third-party partners who are creating
  /// Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenseCodes/get
  ///
  /// @param project  Project ID for this request.
  /// @param license_code  Number corresponding to the License code resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.LicenseCode])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.license_codes.v1.GetLicenseCodeRequest]: @cloud_cpp_reference_link{google/cloud/compute/license_codes/v1/license_codes.proto#L68}
  /// [google.cloud.cpp.compute.v1.LicenseCode]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_077.proto#L27}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::LicenseCode> GetLicenseCode(
      std::string const& project, std::string const& license_code,
      Options opts = {});

  // clang-format off
  ///
  /// Return a specified license code. License codes are mirrored across all
  /// projects that have permissions to read the License Code. *Caution* This
  /// resource is intended for use only by third-party partners who are creating
  /// Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenseCodes/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.license_codes.v1.GetLicenseCodeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.LicenseCode])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.license_codes.v1.GetLicenseCodeRequest]: @cloud_cpp_reference_link{google/cloud/compute/license_codes/v1/license_codes.proto#L68}
  /// [google.cloud.cpp.compute.v1.LicenseCode]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_077.proto#L27}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::LicenseCode> GetLicenseCode(
      google::cloud::cpp::compute::license_codes::v1::
          GetLicenseCodeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource. *Caution*
  /// This resource is intended for use only by third-party partners who are
  /// creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenseCodes/testIamPermissions
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param test_permissions_request_resource  The TestPermissionsRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.license_codes.v1.TestIamPermissionsRequest]: @cloud_cpp_reference_link{google/cloud/compute/license_codes/v1/license_codes.proto#L79}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_145.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::TestPermissionsRequest const&
          test_permissions_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource. *Caution*
  /// This resource is intended for use only by third-party partners who are
  /// creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenseCodes/testIamPermissions
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.license_codes.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.license_codes.v1.TestIamPermissionsRequest]: @cloud_cpp_reference_link{google/cloud/compute/license_codes/v1/license_codes.proto#L79}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_145.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::license_codes::v1::
                         TestIamPermissionsRequest const& request,
                     Options opts = {});

 private:
  std::shared_ptr<LicenseCodesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_license_codes_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSE_CODES_V1_LICENSE_CODES_CLIENT_H
