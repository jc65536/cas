#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "BinaryOperators/BinaryOperator.h"

class Multiplication : public BinaryOperator {
public:
    Multiplication(Node *factor1, Node *factor2) {
        left = factor1;
        right = factor2;
    }
    
    Node *eval();
};

#endif // MULTIPLICATION_H