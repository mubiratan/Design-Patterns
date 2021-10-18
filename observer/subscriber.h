#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>

class Subscriber {
public:
    virtual void notify(const std::string & publisherName, const std::string & message) = 0;
    virtual std::string getName() = 0;
    virtual ~Subscriber() {};
};

#endif // SUBSCRIBER_H
