//
// Created by home on 2023/2/12.
//

#ifndef MOZI_BUFFER_H
#define MOZI_BUFFER_H
#include <cstdio>
#include "util/noncopyable.h"
class Buffer:noncopyable{
    virtual ssize_t readFd(int fd,int *saveErrno);
    virtual ssize_t writeFd(int fd,int *saveErrno);
};

#endif //MOZI_BUFFER_H
