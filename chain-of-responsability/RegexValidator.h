#ifndef REGEXVALIDATOR_H
#define REGEXVALIDATOR_H

#include<string>
#include<iostream>
#include "BaseValidator.h"

class RegexValidator: public BaseValidator {
    std::string patternName;
    std::string regexString;

    public:
        RegexValidator(std::string patternName, std::string regexString) : patternName(patternName), regexString(regexString) {};

        std::string validate(std::string) override;

};
#endif // REGEXVALIDATOR_H
