#include "userinterface.h"

void UserInterface::mediate(const std::string & event) {
    std::cout << "Mediating event: " << event << "...\n";

    if (event == "Name textbox is empty") {
        submitButton->setVisibility(false);
    } else if (event == "Name textbox is not empty") {
        submitButton->setVisibility(true);
    } else if (event == "Is married checkbox is checked") {
        spousesNameTextBox->setVisibility(true);
    } else if (event == "Is married checkbox is unchecked") {
        spousesNameTextBox->setVisibility(false);
    } else if (event == "Submit button clicked") {
        std::cout << "Submitted!\n";
    } else {
        std::cout << "Unrecognized event!";
    }
}

TextBox *UserInterface::getNameTextBox() { return nameTextBox; };
CheckBox *UserInterface::getIsMarriedCheckbox() { return isMarriedCheckbox; };
TextBox *UserInterface::getSpousesNameTextBox() { return spousesNameTextBox; };
ButtonElement *UserInterface::getSubmitButton() { return submitButton; };
