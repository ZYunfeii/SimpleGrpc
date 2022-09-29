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

        if (!status.ok()) {
            return -1;
        }
        return res.y();
    }
    // Send requests based on gRPC stream
    void SendRequestStream() {
        grpc::ClientContext context;
        std::shared_ptr<grpc::ClientReaderWriter<ZYF::Vec, ZYF::Vec>> stream(stub_->GetVec(&context));
        for (int i = 0; i < 5; ++i) {
            ZYF::Vec req;
            for (int j = 0; j < 10; ++j) {
                req.add_v(j);
            }
            if (!stream->Write(req)) {
                std::cout << "The stream has been closed!" << std::endl;
                break;
            }
            std::cout << "Send a message based on stream!" << std::endl;
        }
        stream->WritesDone();

        ZYF::Vec res;
        while (stream->Read(&res)) {
            std::cout << "Receive a reply!" << std::endl;
            auto reply = res.v();
            for (auto it = reply.begin(); it != reply.end(); it++) {
                std::cout << (*it) << " " << std::endl;
            }
            std::cout << std::endl;
        }
        stream->Finish();
    }
private:
    std::unique_ptr<ZYF::YServer::Stub> stub_;
};

int main(int argc, char** argv) {
    Client client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    std::cout << "Got Response:" << client.SendRequest() << std::endl;
    client.SendRequestStream();
    return 0;
}