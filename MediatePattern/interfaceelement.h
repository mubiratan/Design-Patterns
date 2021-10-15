#ifndef INTERFACEELEMENT_H
#define INTERFACEELEMENT_H

#include "mediator.h"

class InterfaceElement {
protected:
    Mediator *mediator;
    std::string name;
    bool isVisible = true;

public:
    InterfaceElement(const std::string & name, bool isVisible, Mediator *mediator) :
        name(name), isVisible(isVisible), mediator(mediator) {};
    void setVisibility(bool isVisible);
    std::string getDescription();
};
#endif // INTERFACEELEMENT_H
