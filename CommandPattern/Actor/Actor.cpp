//
// Created by Nora on 08/06/2024.
//

#include "Actor.h"

void Actor::MoveTo(const Vector2 newPosition) {
    position = newPosition;
}

Vector2 Actor::GetActorPosition() const {
    return position;
}
