//
// Created by home on 2023/2/12.
//

#ifndef MOZI_INET_ADDRESS_H
#define MOZI_INET_ADDRESS_H

#include <arpa/inet.h>
#include <netinet/in.h>
#include <string>
#include "util/noncopyable.h"

class InetAddress {
private:
    sockaddr_in addr_;
public:
    explicit InetAddress(std::string ip = "127.0.0.1", uint16_t port = 3000);

    explicit InetAddress(sockaddr_in &addr) : addr_(addr) {}

    std::string getIp() const;

    uint16_t getPort() const;

    //get ip and port address
    std::string getAddress() const;
    const sockaddr_in *getSockAddr() const {return &addr_;}
    void setSockAddr(sockaddr_in &addr){
        addr_ = addr;
    }
};

#endif //MOZI_INET_ADDRESS_H
