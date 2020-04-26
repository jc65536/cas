#ifndef DIVISION_H
#define DIVISION_H

#include "BinaryOperators/BinaryOperator.h"

class Division : public BinaryOperator {
public:
    Division(Node *numerator, Node *denominator) {
        left = numerator;
        right = denominator;
    }
    
    Node *eval();
};

#endif // DIVISION_H