#ifndef ADDITION_H
#define ADDITION_H

#include "BinaryOperators/BinaryOperator.h"

class Addition : public BinaryOperator {
public:
    Addition(Node *parent) : BinaryOperator(parent) {}

    Node *eval();

    std::string toString() {
        return left->toString() + " + " + right->toString();
    }
};

#endif // ADDITION_H