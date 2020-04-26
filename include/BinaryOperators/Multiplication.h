#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "BinaryOperators/BinaryOperator.h"

class Multiplication : public BinaryOperator {
public:
    Multiplication(Node *parent);
    
    Node *eval();
};

#endif // MULTIPLICATION_H