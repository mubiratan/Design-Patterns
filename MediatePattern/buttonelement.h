#ifndef BUTTONELEMENT_H
#define BUTTONELEMENT_H

#include "interfaceelement.h"

class ButtonElement : public InterfaceElement {
public:
    ButtonElement(const std::string & name, bool isVisible, Mediator *mediator) : InterfaceElement(name, isVisible, mediator) {};
    virtual ~ButtonElement() {};
    virtual void click();
};

#endif // BUTTONELEMENT_H
