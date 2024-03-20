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

ostream &operator<<(ostream &out, const Integer &obj) {
    out << string(obj);
    return out;
}

istream &operator>>(istream &in, Integer &obj) {
    in >> obj.value;
    return in;
}

Integer::operator string () const {
    stringstream ss;
    ss << " value = " << value << endl;
    return ss.str();
}

Integer& Integer::operator = (const Integer& i) {
    value = i.value;
    return *this;
}