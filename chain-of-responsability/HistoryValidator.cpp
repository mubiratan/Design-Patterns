#include <BaseValidator.h>
#include "HistoryValidator.h"

std::string HistoryValidator::validate(std::string testString) {
    std::cout << "Checking if string is in history...\n";

    if (in_vector(testString, historyItems)) {
        return "Please enter a value that you haven't entered before";
    }

    return BaseValidator::validate(testString);
}

