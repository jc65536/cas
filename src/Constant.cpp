#include "Constant.h"

Constant::Constant(long long value) : Node(NodeType::CONSTANT) {
    exact = true;
    if (value > 0)
        sign = 1;
    else if (value < 0)
        sign = -1;
    else
        sign = 0;
    this->iPart = std::abs(value);
    this->fPart = 0;
}

Constant::Constant(int value) : Constant((long long) value) {}

Constant::Constant(double value) : Node(NodeType::CONSTANT) {
    exact = false;
    if (value > 0)
        sign = 1;
    else if (value < 0)
        sign = -1;
    else
        sign = 0;
    double i;
    fPart = std::abs(modf(value, &i));
    iPart = std::abs((long long) i);
}

std::string Constant::toString() {
    std::string str;
    if (sign == 0) {
        str = "0";
    } else {
        if (sign < 0) str = "-";
        str += std::to_string(iPart);
    }
    if (!exact) {
        str += std::to_string(fPart).substr(1);
    }
    return str;
}