#ifndef CHATGROUP_H
#define CHATGROUP_H

#include "publisher.h"
#include <vector>
#include <algorithm>

class ChatGroup : public Publisher {
    std::string groupName;
    std::vector<Subscriber*> subscribers;
public:
    ChatGroup(const std::string & name) : groupName(name) {};
    void subscribe(Subscriber *subscriber) override {
        this->subscribers.push_back(subscriber);
    };
    void unsubscribe(Subscriber *subscriber) override;
    void publish(const std::string & message) override;
};

#endif // CHATGROUP_H
