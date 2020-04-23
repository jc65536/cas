#ifndef NODE_H
#define NODE_H

#include <vector>
#include <functional>
#include <string>

class Node {
public:
    Node *parent;
    
    Node(Node *parent);
    virtual std::string toString() = 0;
};

#endif // NODE_H