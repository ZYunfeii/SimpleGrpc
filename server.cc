#include <iostream>
#include <string>
#include <grpcpp/grpcpp.h>
#include "demo.grpc.pb.h"

class DemoServiceImpl final : public ZYF::YServer::Service {
    grpc::Status GetNum(grpc::ServerContext* context, const ZYF::Num* req, ZYF::Res* res) override {
        std::cout << "Req get:" << req->x() << std::endl;
        res->set_y(req->x() + 1);
        return grpc::Status::OK;
    }
};

void RunServer() {
    std::string serverAddr("0.0.0.0:50051");
    DemoServiceImpl service;
    grpc::ServerBuilder builder;
    builder.AddListeningPort(serverAddr, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server listening on:" << serverAddr << std::endl;
    server->Wait();
}

int main(int argc, char** argv) {
    RunServer();
    return 0;
}