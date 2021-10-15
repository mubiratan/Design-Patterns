#include "textbox.h"

void TextBox::changeText(const std::string & newValue) {
    textValue = newValue;
    if (newValue.empty()) {
        mediator->mediate(name + " empty");
    } else {
        mediator->mediate(name + " not empty");
    }
};
