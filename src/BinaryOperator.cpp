#include "BinaryOperator.h"
#include "Node.h"

BinaryOperator::BinaryOperator(Node *parent) : Node(parent) {
    leftOperand = rightOperand = nullptr;
}