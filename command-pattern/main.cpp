#include "addshapecommand.h"
#include "button.h"
#include "canvas.h"
#include "clearcommand.h"

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    Canvas *canvas = new Canvas;

    Button *addTriangleButton = new Button(new AddShapeCommand("triangle", canvas));
    Button *addSquareButton = new Button(new AddShapeCommand("square", canvas));
    Button *clearButton = new Button(new ClearCommand(canvas));

    addTriangleButton->click();
    std::cout << "Current canvas state: " << addTriangleButton->vectorToString(canvas->getShapes()) << "\n";

    addSquareButton->click();
    addSquareButton->click();
    addTriangleButton->click();
    std::cout << "Current canvas state: " << addTriangleButton->vectorToString(canvas->getShapes()) << "\n";

    clearButton->click();
    std::cout << "Current canvas state: " << addTriangleButton->vectorToString(canvas->getShapes()) << "\n";

    delete clearButton;
    delete addSquareButton;
    delete addTriangleButton;
    delete canvas;

    return 0;
}
