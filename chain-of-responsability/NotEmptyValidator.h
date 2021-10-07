#ifndef NOTEMPTYVALIDATOR_H
#define NOTEMPTYVALIDATOR_H
#include <string>
#include "BaseValidator.h"

class NotEmptyValidator : public BaseValidator {
    public:
        NotEmptyValidator() {};
        std::string validate(std::string);
};

#endif // NOTEMPTYVALIDATOR_H
