#ifndef ADDITION_H
#define ADDITION_H

#include "BinaryOperator.h"

class Addition : public BinaryOperator {
public:
    Addition(Node *addend1, Node *addend2) {
        left = addend1;
        right = addend2;
    }

    Node *eval();

    std::string toString() {
        return left->toString() + " + " + right->toString();
    }
};

#endif // ADDITION_H