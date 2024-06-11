//
// Created by Nora on 08/06/2024.
//

#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <memory>
#include <vector>

#include "../Command.h"


class Vector2;
class Command;

class InputHandler {
public:
    InputHandler() = default;

    Command *HandleMouseInput(Actor &actor, Vector2 mousePosition);

    void UndoInput();

    std::vector<Command *> CommandList;
    Command *UndoCommand = nullptr;
};


#endif //INPUTHANDLER_H
