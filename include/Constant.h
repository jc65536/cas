#ifndef CONSTANT_H
#define CONSTANT_H

#include "Node.h"
#include <cmath>

template <class T>
class Constant : public Node {
public:
    bool integral;
    T value;

    Constant(Node *parent, T value) : Node(parent, NodeType::CONSTANT) {
        integral = floor(value) == value;
        this->value = value;
    }

    std::string toString() {
        return std::to_string(value);
    }
};

#endif // CONSTANT_H