//
// Created by home on 2023/1/29.
//


#include "util/log.h"

Logger &Logger::instance() {
    static Logger logger;
    return logger;
}

void Logger::setLevel(Level level) {
    this->level_ = level;
}

void Logger::writeLog(const std::string &msg) {
    char buf[256];
    std::string prefix;
    switch(this->level_){
        case Level::DEBUG:
            prefix = "[DEBUG]";
            break;
        case Level::INFO:
            prefix = "[INFO]";
            break;
        case Level::FATAL:
            prefix = "[FATAL]";
            break;
    };
    printf("%s-%s %s",Timestamp::now().toString().c_str(),prefix.c_str(),msg.c_str());
}