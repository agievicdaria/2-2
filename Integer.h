#pragma once
#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    Integer();
    Integer(int val);
    Integer(const Integer& number);
    ~Integer();

    int getValue() const {return value;}
    void setValue(int val);

    operator string() const;
    Integer& operator= (const Integer&);
    Integer& operator++();
    friend Integer operator-(const Integer& obj);
    friend Integer operator+(const Integer& a, const Integer& b);
    friend ostream& operator<<(ostream& os, const Integer& obj);
    friend istream& operator>>(istream& is, Integer& obj);
};

