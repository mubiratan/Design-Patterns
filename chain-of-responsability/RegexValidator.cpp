#include <string>
#include <regex>
#include "RegexValidator.h"
#include "BaseValidator.h"

std::string RegexValidator::validate(std::string testString) {
    std::cout << "Checking if string is a valid " << patternName << "...\n";

    if (!std::regex_match(testString, std::regex(regexString))) {
        return "The value entered is not a valid " + patternName;
    }

    return BaseValidator::validate(testString);
}

