#ifndef BUTTON_H
#define BUTTON_H

#include <string>
#include <vector>
#include "command.h"

class Button {
    Command *command;
public:
    Button(Command *command) : command(command) {}
    virtual ~Button() { delete command; };
    virtual void click();
    std::string vectorToString(std::vector<std::string> v);
};

#endif // BUTTON_H
