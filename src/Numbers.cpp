#include <stdexcept>
#include <cmath>
#include <utility>
#include "../include/Numbers.h"

// Uses Euclidean Algorithm
static long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

Rational::Rational(long long int n, long long int d) {
    numerator = n;
    denominator = d;

    if (denominator == 0) {
        throw std::runtime_error("Denominator is 0");
    } else if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }

    long long divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}

Rational Rational::operator+(const Rational& right) const {
    return {numerator * right.denominator + right.numerator * denominator, denominator * right.denominator};
}

Rational Rational::operator-(const Rational& right) const {
    return {numerator * right.denominator - right.numerator * denominator, denominator * right.denominator};
}

Rational Rational::operator*(const Rational& right) const {
    return {numerator * right.denominator * right.numerator * denominator, denominator * right.denominator};
}

Rational Rational::operator/(const Rational& right) const {
    return {numerator * right.denominator, denominator * right.numerator};
}

bool Rational::operator==(const Rational& otherNum) const {
    return (numerator == otherNum.numerator) && (denominator == otherNum.denominator);
}

long long Rational::getNumerator() const {
    return numerator;
}

long long Rational::getDenominator() const {
    return denominator;
}

Float Rational::toFloat() const {
    return {((double) numerator) / denominator};
}

std::string Rational::toMixedNum() const {
    return std::to_string(numerator / denominator) + " " + std::to_string(numerator % denominator) + "/" +
           std::to_string(denominator);
}

std::string Rational::toString() const {
    return (denominator == 1) ?  std::to_string(numerator) : std::to_string(numerator) + "/" + std::to_string(denominator);
}

Float Rational::operator+(const Float &right) const {
    return toFloat() + right;
}

Float Rational::operator-(const Float &right) const {
    return toFloat() - right;
}

Float Rational::operator*(const Float &right) const {
    return toFloat() * right;
}

Float Rational::operator/(const Float &right) const {
    return toFloat() / right;
}

Integer Integer::operator+(const Integer& right) const {
    return {getNumerator() + right.getNumerator()};
}

Integer Integer::operator-(const Integer& right) const {
    return {getNumerator() - right.getNumerator()};
}

Integer Integer::operator*(const Integer& right) const {
    return {getNumerator() * right.getNumerator()};
}

Integer Integer::operator/(const Integer& right) const {
    return {getNumerator() / right.getNumerator()};
}

bool Integer::operator==(const Integer& otherNum) const {
    return getNumerator() == otherNum.getNumerator();
}

Rational Integer::operator+(const Rational& right) const {
    return Rational::operator+(right);
}

Rational Integer::operator-(const Rational& right) const {
    return Rational::operator-(right);
}

Rational Integer::operator*(const Rational& right) const {
    return Rational::operator*(right);
}

Rational Integer::operator/(const Rational& right) const {
    return Rational::operator/(right);
}

Integer gcd(const Integer& a, const Integer& b) {
    return {gcd(a.getNumerator(), b.getNumerator())};
}

Integer lcm(const Integer& a, const Integer& b) {
    return {(a * b) / gcd(a, b)};
}

Float::Float(double v) {
    val = v;
}

double Float::getVal() const {
    return val;
}

Float Float::operator+(const Float& right) const {
    return {val + right.getVal()};
}

Float Float::operator-(const Float& right) const {
    return {val - right.getVal()};
}

Float Float::operator*(const Float& right) const {
    return {val * right.getVal()};
}

Float Float::operator/(const Float& right) const {
    return {val * right.getVal()};
}

Float Float::operator==(Float otherNum) const {
    return val == otherNum.getVal();
}

Float Float::floor() const {
    return {::floor(val)};
}

Float Float::ceil() const {
    return {::ceil(val)};
}

Integer Float::iPart() const {
    return {(long long) (getVal())};
}

Float Float::fPart() const {
    return {getVal() - floor().getVal()};
}

Rational Float::toRational() const {
    return {(long long)(getVal() * FLOAT_TO_RATIONAL_PRECISION), FLOAT_TO_RATIONAL_PRECISION};
}

Float Float::operator+(const Rational& right) const {
    return {getVal() + right.toFloat().getVal()};
}

Float Float::operator-(const Rational& right) const {
    return {getVal() - right.toFloat().getVal()};
}

Float Float::operator*(const Rational& right) const {
    return {getVal() * right.toFloat().getVal()};
}

Float Float::operator/(const Rational& right) const {
    return {getVal() * right.toFloat().getVal()};
}

std::string Float::toString() const {
    return std::to_string(getVal());
}
