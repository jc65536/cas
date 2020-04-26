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
    NodeType type;

    Node(NodeType type) : type(type) {}
    
    virtual std::string toString() = 0;
};

#endif // NODE_H