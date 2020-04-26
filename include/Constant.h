#ifndef CONSTANT_H
#define CONSTANT_H

#include "Node.h"
#include <cmath>

class Constant : public Node {
public:
    bool exact;
    short sign;
    long long iPart;
    double fPart;

    Constant(long long value);
    Constant(int value);
    Constant(double value);
    std::string toString();
};

#endif // CONSTANT_H