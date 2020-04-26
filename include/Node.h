#ifndef NODE_H
#define NODE_H

#include <functional>
#include <string>

enum NodeType {
    CONSTANT,
    VARIABLE,
    BINARY_OPERATOR,
};

class Node {
public:
    Node *parent;
    NodeType type;

    Node(Node *parent, NodeType type) {
        this->parent = parent;
        this->type = type;
    }
    
    virtual std::string toString() = 0;
};

#endif // NODE_H