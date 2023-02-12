//
// Created by home on 2023/2/12.
//
#include <cstring>
#include "net/inet_address.h"

InetAddress::InetAddress(std::string ip, uint16_t port) {
    ::memset(&addr_, 0, sizeof(addr_));
    addr_.sin_family = AF_INET;
    addr_.sin_addr.s_addr = ::inet_addr(ip.c_str());
    addr_.sin_port =::htons(port);
}

std::string InetAddress::getIp() const {
    char buf[64] = {'\0'};
    ::inet_ntop(AF_INET, &addr_.sin_addr, buf, sizeof(buf));
    return buf;
}

uint16_t InetAddress::getPort() const {
    return ::ntohs(addr_.sin_port);
}

std::string InetAddress::getAddress() const {
    char buf[64] = {'\0'};
    snprintf(buf,sizeof(buf),"%s:%d",getIp().c_str(),getPort());
    return buf;
}

