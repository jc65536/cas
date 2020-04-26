#include "everything.h"
#include <iostream>
using namespace std;

int main() {
    Addition *test = new Addition(new Constant(3), new Constant(-2.3));
    cout << test->toString();
}