//
// Created by Nora on 08/06/2024.
//

#include "InputHandler.h"

#include "../Actions/MoveActorCommand.h"
#include "../MathUtil/Vector2.h"

Command *InputHandler::HandleMouseInput(Actor &actor, const Vector2 mousePosition) {
    Command *currentCommand = new MoveActorCommand(actor, mousePosition);

    UndoCommand = currentCommand;
    CommandList.push_back(currentCommand);


    return currentCommand;
}

void InputHandler::UndoInput() {
    CommandList.back()->undo();
    CommandList.pop_back();
}

