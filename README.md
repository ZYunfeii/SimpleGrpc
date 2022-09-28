# About

This is a simple example of gRPC with C++.

server: Add the number in request from client and make a response.

client: Send a request to server and get the reply.

# Proto Generate

```
protoc --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` demo.proto
protoc --cpp_out=. demo.proto
```

# Compile

```shell
cd build
cmake..
make -j
```

# Run

```
./demoServer
./demoClient
```

