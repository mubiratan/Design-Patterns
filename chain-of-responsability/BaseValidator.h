#ifndef BASEVALIDATOR_H
#define BASEVALIDATOR_H

#include "StringValidator.h"

class BaseValidator : public StringValidator
{
    protected:
        StringValidator *next = nullptr;

    public:
        virtual ~BaseValidator() {}
        virtual StringValidator *setNext(StringValidator *nextValidator) override;
        virtual std::string validate(std::string testString) override;
};

#endif // BASEVALIDATOR_H
