#ifndef VARIABLE_H
#define VARIABLE_H

#include "Node.h"
#include <string>

class Variable : public Node {
public:
    std::string name;

    Variable(Node *parent, std::string name);
    std::string toString();
};

#endif // VARIABLE_H