cmake_minimum_required(VERSION 3.5.1)

project(DemoGrpc C CXX)
include(./common.cmake)

set(proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/../demo.pb.cc")
set(proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/../demo.pb.h")
set(grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/../demo.grpc.pb.cc")
set(grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/../demo.grpc.pb.h")

include_directories("${CMAKE_CURRENT_BINARY_DIR}")

add_library(grpc_proto ${proto_srcs} ${proto_hdrs} ${grpc_srcs} ${grpc_hdrs})

target_link_libraries(grpc_proto ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF})

add_executable(demoServer "server.cc")
add_executable(demoClient "client.cc")
target_link_libraries(demoServer grpc_proto ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF})
target_link_libraries(demoClient grpc_proto ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF})