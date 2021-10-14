#include "button.h"

void Button::click() {
    command->execute();
};

std::string Button::vectorToString(std::vector<std::string> v) {
    std::string result = "";
    for(int i=0; i < v.size(); i++) {
        result.append(v.at(i) + ", ");
    }
    return result;
}
