#ifndef CONSTANT_H
#define CONSTANT_H

#include "Node.h"
#include <string>

template <typename T>
class Constant : public Node {
public:
    bool exact;
    T value;

    Constant(Node *parent, T value);
    std::string toString();
};

#endif // CONSTANT_H