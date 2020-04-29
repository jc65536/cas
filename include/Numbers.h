//
// Created by brianton on 4/26/20.
//

#include "Node.h"

#ifndef CAS_NUMBERS_H
#define CAS_NUMBERS_H

const long long FLOAT_TO_RATIONAL_PRECISION = 100000000L;

class Number : public Node {
public:
    Number() : Node(NodeType::NUMBER) {}
};

// Class Prototypes
class Rational;
class Integer;
class Float;


class Rational : public Number {
    long long numerator;
    long long denominator;
public:
    Rational(long long n = 0L, long long d = 1L); // Constructor automatically reduces rational

    virtual Rational operator+  (const Rational& right) const;   // +  addition operator
    virtual Rational operator-  (const Rational& right) const;   // -  subtraction operator
    virtual Rational operator*  (const Rational& right) const;   // *  multiplication operator
    virtual Rational operator/  (const Rational& right) const;   // /  division operator

    Float operator+  (const Float& right) const;
    Float operator-  (const Float& right) const;
    Float operator*  (const Float& right) const;
    Float operator/  (const Float& right) const;

    bool operator==  (const Rational& otherNum) const;   // == equality operator

    long long getNumerator() const;
    long long getDenominator() const;
    Float toFloat() const;
    std::string toMixedNum() const;

    std::string toString();
};

class Integer : public Rational {
public:
    Integer(long long val) : Rational(val) {}
    Rational operator+  (const Rational& right) const;   // +  addition operator
    Rational operator-  (const Rational& right) const;   // -  subtraction operator
    Rational operator*  (const Rational& right) const;   // *  multiplication operator
    Rational operator/  (const Rational& right) const;   // /  division operator

    // Note that we have to override again in order to maintain integer-ness of return value
    Integer operator+  (const Integer& right) const;   // +  addition operator
    Integer operator-  (const Integer& right) const;   // -  subtraction operator
    Integer operator*  (const Integer& right) const;   // *  multiplication operator
    Integer operator/  (const Integer& right) const;   // /  division operator
    bool operator==  (const Integer& otherNum) const;   // == equality operator

    std::string toString();
};

Integer gcd(const Integer& a, const Integer& b);
Integer lcm(const Integer& a, const Integer& b);

// Really just a glorified wrapper class
class Float : public Number {
    double val;
public:
    Float(double v);
    Float operator+  (const Float& right) const;   // +  addition operator
    Float operator-  (const Float& right) const;   // -  subtraction operator
    Float operator*  (const Float& right) const;   // *  multiplication operator
    Float operator/  (const Float& right) const;   // /  division operator

    Float operator+  (const Rational& right) const;   // +  addition operator
    Float operator-  (const Rational& right) const;   // -  subtraction operator
    Float operator*  (const Rational& right) const;   // *  multiplication operator
    Float operator/  (const Rational& right) const;   // /  division operator

    Float operator== (const Float otherNum) const;

    double getVal() const;
    Float floor() const;
    Float ceil() const;
    Integer iPart() const;
    Float fPart() const;
    Rational toRational() const;
    std::string toString();
};
#endif //CAS_NUMBERS_H
