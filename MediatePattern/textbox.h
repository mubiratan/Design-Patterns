#ifndef TEXTBOX_H
#define TEXTBOX_H

#include "interfaceelement.h"

class TextBox : public InterfaceElement {
    std::string textValue = "";

public:
    TextBox(const std::string & name, bool isVisible, Mediator *mediator) : InterfaceElement(name, isVisible, mediator) {};
    virtual ~TextBox() {};
    virtual void changeText(const std::string & newValue);
};
#endif // TEXTBOX_H
