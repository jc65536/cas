#ifndef BINARYOPERATOR_H
#define BINARYOPERATOR_H

#include "Node.h"

class BinaryOperator : public Node {
public:
    Node *leftOperand, *rightOperand;

    BinaryOperator(Node *parent);
    Node *eval();
};

#endif // BINARYOPERATOR_H