#include "checkbox.h"

void CheckBox::setIsChecked(bool isChecked) {
    this->isChecked = isChecked;

    if (isChecked) {
        mediator->mediate(name + " is checked");
    } else {
        mediator->mediate(name + " is unchecked");
    }
};
