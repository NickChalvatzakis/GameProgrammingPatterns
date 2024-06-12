//
// Created by Nora on 11/06/2024.
//

#include "MoveActorCommand.h"

#include <iostream>

MoveActorCommand::MoveActorCommand(Actor &actor, const Vector2 newPosition): actor(actor),
                                                                             newPosition(newPosition),
                                                                             previousPosition(Vector2::Zero()) {
    type = "Move Command";
}

void MoveActorCommand::execute() {
    std::cout << "Executing command" << std::endl;
    previousPosition = actor.position;
    actor.MoveTo(newPosition);
}

void MoveActorCommand::undo() {
    std::cout << "Executing Undo Command" << std::endl;
    actor.MoveTo(previousPosition);
}
