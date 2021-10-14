#include "addshapecommand.h"

#include "canvas.h"

void AddShapeCommand::execute() {
    canvas->addShape(shapeName);
}
