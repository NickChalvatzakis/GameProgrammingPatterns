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
    MoveActorCommand(Actor &actor, Vector2 newPosition);

    void execute() override;

    void undo() override;
};


#endif //MOVEACTORCOMMAND_H
