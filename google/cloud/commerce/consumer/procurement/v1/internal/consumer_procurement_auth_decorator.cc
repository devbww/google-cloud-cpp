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
// source:
// google/cloud/commerce/consumer/procurement/v1/procurement_service.proto

#include "google/cloud/commerce/consumer/procurement/v1/internal/consumer_procurement_auth_decorator.h"
#include <google/cloud/commerce/consumer/procurement/v1/procurement_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConsumerProcurementServiceAuth::ConsumerProcurementServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ConsumerProcurementServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceAuth::AsyncPlaceOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncPlaceOrder(cq, *std::move(context),
                                      std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceAuth::PlaceOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::PlaceOrderRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PlaceOrder(context, options, request);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>
ConsumerProcurementServiceAuth::GetOrder(
    grpc::ClientContext& context, Options const& options,
    google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOrder(context, options, request);
}

StatusOr<google::cloud::commerce::consumer::procurement::v1::ListOrdersResponse>
ConsumerProcurementServiceAuth::ListOrders(
    grpc::ClientContext& context, Options const& options,
    google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOrders(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceAuth::AsyncModifyOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::
        ModifyOrderRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncModifyOrder(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceAuth::ModifyOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::
        ModifyOrderRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ModifyOrder(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceAuth::AsyncCancelOrder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::commerce::consumer::procurement::v1::
        CancelOrderRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCancelOrder(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceAuth::CancelOrder(
    grpc::ClientContext& context, Options options,
    google::cloud::commerce::consumer::procurement::v1::
        CancelOrderRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOrder(context, options, request);
}

StatusOr<google::longrunning::Operation>
ConsumerProcurementServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ConsumerProcurementServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> ConsumerProcurementServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1_internal
}  // namespace cloud
}  // namespace google
