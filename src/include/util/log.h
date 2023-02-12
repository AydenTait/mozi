//
// Created by home on 2023/1/29.
//

#ifndef MOZI_LOG_H
#define MOZI_LOG_H
#include "string"
#include "noncopyable.h"
#include "Timestamp.h"
class Logger;
#define LOG(format,level,...)  \
    do{                          \
        Logger &logger = Logger::instance(); \
        logger.setLevel(level);  \
        char buf[1024] = {'\0'};  \
        snprintf(buf,1024,format,##__VA_ARGS__); \
        logger.writeLog(buf);                             \
    }while(0)
#ifdef MOZI_DEBUG
#define DEBUG(format,...) LOG(format,Logger::Level::DEBUG,##__VA_ARGS__)
#else
#define DEBUG(format,...)
#endif

#define INFO(format,...) LOG(format,Logger::Level::INFO,##__VA_ARGS__)
#define FATAL(format,...) LOG(format,Logger::Level::FATAL,##__VA_ARGS__)
#define ERROR(format,...) LOG(format,Logger::Level::ERROR,##__VA_ARGS__);exit(-1);

class Logger: noncopyable{
public:
    enum class Level{
        DEBUG,
        INFO,
        FATAL,
        ERROR,
    };
    Level level_;
    static Logger &instance();
    void setLevel(Level);
    void writeLog(const std::string &msg);
};


#endif //MOZI_LOG_H
