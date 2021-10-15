#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <string>

class Mediator {
public:
    virtual void mediate(const std::string & event) = 0;
};

#endif // MEDIATOR_H
