#include "Variable.h"
#include "Node.h"
#include <string>

Variable::Variable(Node *parent, std::string name) : Node(parent) {
    this->name = name;
}

std::string Variable::toString() {
    return name;
}