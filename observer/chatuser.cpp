#include "chatuser.h"

void ChatUser::notify(const std::string & publisherName, const std::string & message) {
        std::cout << userName << " received a new message from " << publisherName << ": " << message << "\n";
}

std::string ChatUser::getName() {
    return userName;
};
