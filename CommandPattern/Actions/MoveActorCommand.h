//
// Created by Nora on 11/06/2024.
//

#ifndef MOVEACTORCOMMAND_H
#define MOVEACTORCOMMAND_H

#include <memory>

#include "../Command.h"
#include "../Actor/Actor.h"

class Actor;

class MoveActorCommand final : public Command {
private:
    Actor &actor;
    Vector2 newPosition, previousPosition;

public:
    MoveActorCommand(Actor &actor, const Vector2 newPosition) : actor(actor),
                                                                newPosition(newPosition),
                                                                previousPosition(Vector2::Zero()) {
        type = "Move Command";
    }

    void execute() override {
        std::cout << "Executing command" << std::endl;
        previousPosition = actor.position;
        actor.MoveTo(newPosition);
    }

    void undo() override {
        std::cout << "Executing Undo Command" << std::endl;
        actor.MoveTo(previousPosition);
    }
};


#endif //MOVEACTORCOMMAND_H
