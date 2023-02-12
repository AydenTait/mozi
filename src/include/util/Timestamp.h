//
// Created by home on 2023/1/29.
//

#ifndef MOZI_TIMESTAMP_H
#define MOZI_TIMESTAMP_H
#include "time.h"
#include "string"
class Timestamp{

private:
    time_t time_;
public:
    Timestamp();
    explicit Timestamp(time_t timestamp);
    static Timestamp now();
    std::string toString() const;
};



#endif //MOZI_TIMESTAMP_H
