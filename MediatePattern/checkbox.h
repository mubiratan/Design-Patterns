#ifndef CHECKBOX_H
#define CHECKBOX_H

#include "interfaceelement.h"

class CheckBox : public InterfaceElement {
    bool isChecked = false;

public:
    CheckBox(const std::string & name, bool isVisible, Mediator *mediator) :
        InterfaceElement(name, isVisible, mediator) {};
    virtual ~CheckBox() {};
    virtual void setIsChecked(bool isChecked);
};

#endif // CHECKBOX_H
