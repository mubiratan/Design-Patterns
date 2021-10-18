#include "chatgroup.h"

void ChatGroup::unsubscribe(Subscriber *subscriber) {
    subscribers.erase(std::remove_if(subscribers.begin(), subscribers.end(), [subscriber](Subscriber *s) { return s->getName() == subscriber->getName(); }), subscribers.end());
};
void ChatGroup::publish(const std::string & message) {
    for (auto subscriber : subscribers) {
        subscriber->notify(groupName, message);
    }
};
