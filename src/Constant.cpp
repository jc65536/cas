#include "Constant.h"
#include "Node.h"
#include <string>

template <typename T>
Constant<T>::Constant(Node *parent, T value) : Node(parent) {
    exact = true;
    this->value = value;
}

template <typename T>
std::string Constant<T>::toString() {
    return std::to_string(value);
}