//
// Created by home on 2023/2/12.
//
#include "net/inet_address.h"
#include "gtest/gtest.h"
TEST(TestAddress,TestAddressGetIp){
    const std::string ip = "127.0.0.1";
    const uint16_t port = 3000;
    InetAddress address{ip,port};
    EXPECT_EQ(ip,address.getIp());
    EXPECT_EQ(port,address.getPort());
}