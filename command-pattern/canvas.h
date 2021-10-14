#ifndef CANVAS_H
#define CANVAS_H

#include <string>
#include <vector>

class Canvas {
    std::vector<std::string> shapes;
public:
    void addShape(const std::string & newShape);
    void clearAll() ;
    std::vector<std::string> getShapes();
};

#endif // CANVAS_H
