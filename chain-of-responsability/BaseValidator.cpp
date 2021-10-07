#include "BaseValidator.h"
#include "StringValidator.h"

StringValidator *BaseValidator::setNext(StringValidator *nextValidator) {
    next = nextValidator;
    return nextValidator;
}

std::string BaseValidator::validate(std::string testString) {
    if(this->next) {
        return this->next->validate(testString);
    }

    return "Success!";
}
