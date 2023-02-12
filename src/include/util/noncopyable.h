//
// Created by home on 2023/1/29.
//

#ifndef MOZI_NONCOPYABLE_H
#define MOZI_NONCOPYABLE_H
class noncopyable{
public:
    noncopyable(noncopyable &)=delete;
    noncopyable &operator=(noncopyable &)=delete;
protected:
    noncopyable()=default;
    ~noncopyable()=default;
};
#endif //MOZI_NONCOPYABLE_H
