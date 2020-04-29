#include "../include/everything.h"
#include <iostream>
using namespace std;

int main() {

    Rational r1(2,3);
    Rational r2(1,3);
    cout << r1.toString() << " + " << r2.toString() << " = " << (r1 + r2).toString() << endl;

    Integer i1(1);
    Float f2(2.33);
    cout << i1.toString() << " + " << f2.toString() << " = " << (f2 + i1).toString() << endl;
}
