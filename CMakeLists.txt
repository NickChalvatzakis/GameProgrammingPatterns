cmake_minimum_required(VERSION 3.28)
project(GameProgrammingPatterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(GameProgrammingPatterns main.cpp
        CommandPattern/Command.h
        CommandPattern/InputHandler/InputHandler.cpp
        CommandPattern/InputHandler/InputHandler.h
        CommandPattern/Actor/Actor.cpp
        CommandPattern/Actor/Actor.h
        CommandPattern/Actions/MoveActorCommand.cpp
        CommandPattern/Actions/MoveActorCommand.h
        CommandPattern/Maths/Vector2.h
)
