#include <iostream>
#include <string>
#include <grpcpp/grpcpp.h>
#include "demo.grpc.pb.h"

class Client {
public:
    Client(std::shared_ptr<grpc::Channel> channel):stub_(ZYF::YServer::NewStub(channel)){}
    int SendRequest() {
        ZYF::Num req;
        req.set_x(3);
        ZYF::Res res;
        grpc::ClientContext context;
        grpc::Status status = stub_->GetNum(&context, req, &res);

        if (status.ok()) {
            return res.y();
        } else {
            return -1;
        }
    }
private:
    std::unique_ptr<ZYF::YServer::Stub> stub_;
};

int main(int argc, char** argv) {
    Client client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    std::cout << "Got Response:" << client.SendRequest() << std::endl;
    return 0;
}