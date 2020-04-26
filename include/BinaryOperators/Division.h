#ifndef DIVISION_H
#define DIVISION_H

#include "BinaryOperators/BinaryOperator.h"

class Division : public BinaryOperator {
public:
    Division(Node *parent);
    
    Node *eval();
};

#endif // DIVISION_H