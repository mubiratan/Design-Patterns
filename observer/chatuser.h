#ifndef CHATUSER_H
#define CHATUSER_H

#include <iostream>
#include "subscriber.h"

class ChatUser : public Subscriber {
    std::string userName;
public:
    ChatUser(const std::string & userName) : userName(userName) {};
    void notify(const std::string & publisherName, const std::string & message) override;
    std::string getName() override;
};
#endif // CHATUSER_H
