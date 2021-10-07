#ifndef STRINGVALIDATOR_H
#define STRINGVALIDATOR_H
#include <string>

class StringValidator {
    public:
        virtual ~StringValidator() {};
        virtual StringValidator *setNext(StringValidator *nextValidator) = 0;
        virtual std::string validate(std::string) = 0;
};


#endif // STRINGVALIDATOR_H
