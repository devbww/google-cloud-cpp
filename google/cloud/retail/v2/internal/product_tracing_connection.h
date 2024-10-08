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
// source: google/cloud/retail/v2/product_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PRODUCT_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PRODUCT_TRACING_CONNECTION_H

#include "google/cloud/retail/v2/product_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ProductServiceTracingConnection
    : public retail_v2::ProductServiceConnection {
 public:
  ~ProductServiceTracingConnection() override = default;

  explicit ProductServiceTracingConnection(
      std::shared_ptr<retail_v2::ProductServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::retail::v2::Product> CreateProduct(
      google::cloud::retail::v2::CreateProductRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Product> GetProduct(
      google::cloud::retail::v2::GetProductRequest const& request) override;

  StreamRange<google::cloud::retail::v2::Product> ListProducts(
      google::cloud::retail::v2::ListProductsRequest request) override;

  StatusOr<google::cloud::retail::v2::Product> UpdateProduct(
      google::cloud::retail::v2::UpdateProductRequest const& request) override;

  Status DeleteProduct(
      google::cloud::retail::v2::DeleteProductRequest const& request) override;

  future<StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>
  PurgeProducts(
      google::cloud::retail::v2::PurgeProductsRequest const& request) override;

  StatusOr<google::longrunning::Operation> PurgeProducts(
      NoAwaitTag,
      google::cloud::retail::v2::PurgeProductsRequest const& request) override;

  future<StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>
  PurgeProducts(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
  ImportProducts(
      google::cloud::retail::v2::ImportProductsRequest const& request) override;

  StatusOr<google::longrunning::Operation> ImportProducts(
      NoAwaitTag,
      google::cloud::retail::v2::ImportProductsRequest const& request) override;

  future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
  ImportProducts(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
  SetInventory(
      google::cloud::retail::v2::SetInventoryRequest const& request) override;

  StatusOr<google::longrunning::Operation> SetInventory(
      NoAwaitTag,
      google::cloud::retail::v2::SetInventoryRequest const& request) override;

  future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
  SetInventory(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
  AddFulfillmentPlaces(
      google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AddFulfillmentPlaces(
      NoAwaitTag,
      google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request)
      override;

  future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
  AddFulfillmentPlaces(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
  RemoveFulfillmentPlaces(
      google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RemoveFulfillmentPlaces(
      NoAwaitTag,
      google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request)
      override;

  future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
  RemoveFulfillmentPlaces(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
  AddLocalInventories(
      google::cloud::retail::v2::AddLocalInventoriesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AddLocalInventories(
      NoAwaitTag,
      google::cloud::retail::v2::AddLocalInventoriesRequest const& request)
      override;

  future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
  AddLocalInventories(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
  RemoveLocalInventories(
      google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RemoveLocalInventories(
      NoAwaitTag,
      google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request)
      override;

  future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
  RemoveLocalInventories(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

 private:
  std::shared_ptr<retail_v2::ProductServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<retail_v2::ProductServiceConnection>
MakeProductServiceTracingConnection(
    std::shared_ptr<retail_v2::ProductServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PRODUCT_TRACING_CONNECTION_H
