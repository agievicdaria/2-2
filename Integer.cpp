// Integer.cpp
#include "Integer.h"
#include <sstream>
using namespace std;

Integer::Integer() {
    value = 0;
}

Integer::Integer(int val) {
    value = val;
}

Integer::Integer(const Integer &number) {
    value = number.value;
}

Integer::~Integer() {}

void Integer::setValue(int val) {
    value = val;
}

Integer& Integer::operator++() {
    ++value;
    return *this;
}

Integer operator-(const Integer& obj) {
    return Integer(-obj.value);
}

Integer operator+(const Integer& a, const Integer& b) {
    return Integer(a.value + b.value);
}
// Integer operator+(Integer &a, Integer &b)
// {
//     Integer i(0);
//     i.value = a.value + b.value;
//     return i;
// }

ostream &operator<<(ostream &out, const Integer &obj) {
    out << obj.value;
    return out;
}

istream &operator>>(istream &in, Integer &obj) {
    in >> obj.value;
    return in;
}

string Integer::ToString() const {
    stringstream sout;
    sout << "value: " << value;
    return sout.str();
}
