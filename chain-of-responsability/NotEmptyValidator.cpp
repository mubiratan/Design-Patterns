#include <BaseValidator.h>
#include "NotEmptyValidator.h"

std::string NotEmptyValidator::validate(std::string testString) {
    puts("Checking if empty...");

    if(testString.empty()) {
        return "Please enter a value";
    }

    return BaseValidator::validate(testString);
}
