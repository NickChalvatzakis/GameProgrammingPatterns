//
// Created by Nora on 08/06/2024.
//

#ifndef ACTOR_H
#define ACTOR_H

#include <iostream>

#include "../MathUtil/Vector2.h"

class Actor {
public:
    explicit Actor(const Vector2 &pos) : position(pos) {
    }

    Actor() : position(Vector2::Zero()) {
    }

    void MoveTo(Vector2 newPosition);

    Vector2 GetActorPosition() const;

public:
    Vector2 position;
};


#endif //ACTOR_H
