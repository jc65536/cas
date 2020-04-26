#include "everything.h"
#include <iostream>
using namespace std;

int main() {
    Addition *test = new Addition(nullptr);
    test->left = new Constant<int>(test, 3);
    test->right = new Constant<int>(test, 2);
    cout << test->toString();
}