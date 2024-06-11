//
// Created by Nora on 08/06/2024.
//

#ifndef COMMAND_H
#define COMMAND_H
#include <string>


class Actor;

class Command {
public:
    virtual ~Command() = default;

    virtual void execute() = 0;

    virtual void undo() = 0;

    std::string type;

    friend std::ostream &operator<<(std::ostream &stream, Command const &c) {
        return stream << c.type;
    }
};


#endif //COMMAND_H
