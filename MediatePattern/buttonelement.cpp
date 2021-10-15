#include "buttonelement.h"

void ButtonElement::click() {
    mediator->mediate(name + " clicked");
};
