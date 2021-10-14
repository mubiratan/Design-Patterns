#ifndef CLEARCOMMAND_H
#define CLEARCOMMAND_H

#include <canvas.h>
#include <command.h>

class ClearCommand: public Command {
    Canvas *canvas;
public:
    ClearCommand(Canvas *canvas) : canvas(canvas) {};
    void execute();
};

#endif // CLEARCOMMAND_H
