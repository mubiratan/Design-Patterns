#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>
#include "buttonelement.h"
#include "checkbox.h"
#include "mediator.h"
#include "textbox.h"

class UserInterface : public Mediator {
    TextBox *nameTextBox;
    CheckBox *isMarriedCheckbox;
    TextBox *spousesNameTextBox;
    ButtonElement *submitButton;

public:
    UserInterface() {
        nameTextBox = new TextBox("Name textbox", true, this);
        isMarriedCheckbox = new CheckBox("Is married checkbox", true, this);
        spousesNameTextBox = new TextBox("Spouse's name textbox", false, this);
        submitButton = new ButtonElement("Submit button", false, this);
    }

    virtual ~UserInterface() {
        delete nameTextBox;
        delete isMarriedCheckbox;
        delete spousesNameTextBox;
        delete submitButton;
    }

    void mediate(const std::string & event) override;
    TextBox *getNameTextBox();
    CheckBox *getIsMarriedCheckbox();
    TextBox *getSpousesNameTextBox();
    ButtonElement *getSubmitButton();
};

#endif // USERINTERFACE_H
