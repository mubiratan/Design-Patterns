#include "interfaceelement.h"

void InterfaceElement::setVisibility(bool isVisible) { this->isVisible = isVisible; };

std::string InterfaceElement::getDescription() {
    return isVisible
        ? name + " is visible"
        : name + " is NOT visible";
}
