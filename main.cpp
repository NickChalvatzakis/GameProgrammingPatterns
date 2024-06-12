#include <iostream>
#include <memory>

#include "CommandPattern/Actor/Actor.h"
#include "CommandPattern/InputHandler/InputHandler.h"
#include "Maths/Vector2.h"

int main() {
    const std::unique_ptr<Actor> actor = std::make_unique<Actor>();
    InputHandler inputHandler;

    constexpr Vector2 mousePosition = Vector2(5, 3);


    std::cout << "Actor Location at: " << actor->GetActorPosition() << std::endl;
    std::cout << "Mouse Position at: " << mousePosition << std::endl;


    if (Command *command = inputHandler.HandleMouseInput(*actor, mousePosition)) {
        command->execute();
    }

    for (auto &com: inputHandler.CommandList) {
        std::cout << *com << std::endl;
    }


    std::cout << "Whoopsy Doopsy Doo, I'm pressing the Undo" << std::endl;
    inputHandler.UndoInput();
    std::cout << "Actor Location at: " << actor->GetActorPosition() << std::endl;


    return 0;
}
