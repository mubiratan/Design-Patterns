#include <iostream>
#include "userinterface.h"

int main(int argc, const char * argv[]) {
    UserInterface *ui = new UserInterface;

    InterfaceElement *elements[] = {
        ui->getNameTextBox(),
        ui->getIsMarriedCheckbox(),
        ui->getSpousesNameTextBox(),
        ui->getSubmitButton(),
    };
    for (auto element : elements) {
        std::cout << element->getDescription() << "\n";
    }

    std::cout << "-------------------------------------------------\n";

    ui->getIsMarriedCheckbox()->setIsChecked(true);
    for (auto element : elements) {
        std::cout << element->getDescription() << "\n";
    }

    delete ui;
    return 0;
}
