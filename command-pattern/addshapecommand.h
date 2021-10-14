#ifndef ADDSHAPECOMMAND_H
#define ADDSHAPECOMMAND_H

#include "command.h"
#include "canvas.h"
#include <string>

class AddShapeCommand: public Command {
    std::string shapeName;
    Canvas *canvas;
public:
    AddShapeCommand(const std::string & shapeName, Canvas* canvas) :
        shapeName(shapeName), canvas(canvas) {};
    void execute();
};

#endif // ADDSHAPECOMMAND_H
