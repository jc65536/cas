#ifndef BINARYOPERATOR_H
#define BINARYOPERATOR_H

#include "../Node.h"

class BinaryOperator : public Node {
public:
    Node *left, *right;

    BinaryOperator() : Node(NodeType::BINARY_OPERATOR) {
        left = right = nullptr;
    }
    
    Node *eval(); // Node * can point to a Constant or an expression
};

#endif // BINARYOPERATOR_H