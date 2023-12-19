// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: service.proto

#include "service.pb.h"
#include "service.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace protos {

static const char* Game_method_names[] = {
  "/protos.Game/GetActions",
  "/protos.Game/SendServerParams",
  "/protos.Game/SendPlayerParams",
  "/protos.Game/SendPlayerType",
};

std::unique_ptr< Game::Stub> Game::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Game::Stub> stub(new Game::Stub(channel, options));
  return stub;
}

Game::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetActions_(Game_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendServerParams_(Game_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendPlayerParams_(Game_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendPlayerType_(Game_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Game::Stub::GetActions(::grpc::ClientContext* context, const ::protos::State& request, ::protos::Actions* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::State, ::protos::Actions, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetActions_, context, request, response);
}

void Game::Stub::async::GetActions(::grpc::ClientContext* context, const ::protos::State* request, ::protos::Actions* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::State, ::protos::Actions, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetActions_, context, request, response, std::move(f));
}

void Game::Stub::async::GetActions(::grpc::ClientContext* context, const ::protos::State* request, ::protos::Actions* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetActions_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::Actions>* Game::Stub::PrepareAsyncGetActionsRaw(::grpc::ClientContext* context, const ::protos::State& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::Actions, ::protos::State, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetActions_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::Actions>* Game::Stub::AsyncGetActionsRaw(::grpc::ClientContext* context, const ::protos::State& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetActionsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Game::Stub::SendServerParams(::grpc::ClientContext* context, const ::protos::ServerParam& request, ::protos::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::ServerParam, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendServerParams_, context, request, response);
}

void Game::Stub::async::SendServerParams(::grpc::ClientContext* context, const ::protos::ServerParam* request, ::protos::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::ServerParam, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendServerParams_, context, request, response, std::move(f));
}

void Game::Stub::async::SendServerParams(::grpc::ClientContext* context, const ::protos::ServerParam* request, ::protos::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendServerParams_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::Empty>* Game::Stub::PrepareAsyncSendServerParamsRaw(::grpc::ClientContext* context, const ::protos::ServerParam& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::Empty, ::protos::ServerParam, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendServerParams_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::Empty>* Game::Stub::AsyncSendServerParamsRaw(::grpc::ClientContext* context, const ::protos::ServerParam& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendServerParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Game::Stub::SendPlayerParams(::grpc::ClientContext* context, const ::protos::PlayerParam& request, ::protos::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::PlayerParam, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendPlayerParams_, context, request, response);
}

void Game::Stub::async::SendPlayerParams(::grpc::ClientContext* context, const ::protos::PlayerParam* request, ::protos::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::PlayerParam, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendPlayerParams_, context, request, response, std::move(f));
}

void Game::Stub::async::SendPlayerParams(::grpc::ClientContext* context, const ::protos::PlayerParam* request, ::protos::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendPlayerParams_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::Empty>* Game::Stub::PrepareAsyncSendPlayerParamsRaw(::grpc::ClientContext* context, const ::protos::PlayerParam& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::Empty, ::protos::PlayerParam, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendPlayerParams_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::Empty>* Game::Stub::AsyncSendPlayerParamsRaw(::grpc::ClientContext* context, const ::protos::PlayerParam& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendPlayerParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Game::Stub::SendPlayerType(::grpc::ClientContext* context, const ::protos::PlayerType& request, ::protos::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::PlayerType, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendPlayerType_, context, request, response);
}

void Game::Stub::async::SendPlayerType(::grpc::ClientContext* context, const ::protos::PlayerType* request, ::protos::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::PlayerType, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendPlayerType_, context, request, response, std::move(f));
}

void Game::Stub::async::SendPlayerType(::grpc::ClientContext* context, const ::protos::PlayerType* request, ::protos::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendPlayerType_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::Empty>* Game::Stub::PrepareAsyncSendPlayerTypeRaw(::grpc::ClientContext* context, const ::protos::PlayerType& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::Empty, ::protos::PlayerType, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendPlayerType_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::Empty>* Game::Stub::AsyncSendPlayerTypeRaw(::grpc::ClientContext* context, const ::protos::PlayerType& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendPlayerTypeRaw(context, request, cq);
  result->StartCall();
  return result;
}

Game::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Game_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Game::Service, ::protos::State, ::protos::Actions, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Game::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::State* req,
             ::protos::Actions* resp) {
               return service->GetActions(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Game_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Game::Service, ::protos::ServerParam, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Game::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::ServerParam* req,
             ::protos::Empty* resp) {
               return service->SendServerParams(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Game_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Game::Service, ::protos::PlayerParam, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Game::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::PlayerParam* req,
             ::protos::Empty* resp) {
               return service->SendPlayerParams(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Game_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Game::Service, ::protos::PlayerType, ::protos::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Game::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::PlayerType* req,
             ::protos::Empty* resp) {
               return service->SendPlayerType(ctx, req, resp);
             }, this)));
}

Game::Service::~Service() {
}

::grpc::Status Game::Service::GetActions(::grpc::ServerContext* context, const ::protos::State* request, ::protos::Actions* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Game::Service::SendServerParams(::grpc::ServerContext* context, const ::protos::ServerParam* request, ::protos::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Game::Service::SendPlayerParams(::grpc::ServerContext* context, const ::protos::PlayerParam* request, ::protos::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Game::Service::SendPlayerType(::grpc::ServerContext* context, const ::protos::PlayerType* request, ::protos::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace protos

