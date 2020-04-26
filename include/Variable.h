#ifndef VARIABLE_H
#define VARIABLE_H

#include "Node.h"
#include <string>

class Variable : public Node {
public:
    std::string name;

    Variable(std::string name) : Node(NodeType::VARIABLE) {
        this->name = name;
    }

    std::string toString() {
        return this->name;
    }
};

#endif // VARIABLE_H