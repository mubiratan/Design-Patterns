#include "canvas.h"

void Canvas::addShape(const std::string & newShape) {
    shapes.push_back(newShape);
};

void Canvas::clearAll() {
    shapes.clear();
};

std::vector<std::string> Canvas::getShapes() {
    return shapes;
};
