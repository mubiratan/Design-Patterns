#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "subscriber.h"

class Publisher {
public:
    virtual void subscribe(Subscriber *subscriber) = 0;
    virtual void unsubscribe(Subscriber *subscriber) = 0;
    virtual void publish(const std::string & message) = 0;
    virtual ~Publisher() {};
};

#endif // PUBLISHER_H
