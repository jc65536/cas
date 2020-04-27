#include "../include/everything.h"
#include <iostream>
using namespace std;

int main() {
    Addition *test = new Addition(new Constant(3), new Constant(-2.3));
    cout << test->toString() << endl;

    Rational r1(2,3);
    Rational r2(1,3);
    cout << r1.toString() << " + " << r2.toString() << " = " << (r1 + r2).toString() << endl;
}