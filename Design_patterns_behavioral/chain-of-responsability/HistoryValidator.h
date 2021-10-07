#ifndef HISTORYVALIDATOR_H
#define HISTORYVALIDATOR_H

#include <string>
#include <vector>
#include <iostream>
#include <regex>
#include "BaseValidator.h"

class HistoryValidator: public BaseValidator {
    std::string patternName;
    std::string regexString;
    std::vector<std::string> historyItems;

    public:
        HistoryValidator(std::vector<std::string> historyItems) : historyItems(historyItems) {};
        std::string validate(std::string) override;
    };

inline bool in_vector(const std::string &value, const std::vector<std::string> &v) {
    return std::find(v.begin(), v.end(), value) != v.end();
}

#endif // HISTORYVALIDATOR_H
