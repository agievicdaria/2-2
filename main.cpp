#include <iostream>
#include "Integer.h"
using namespace std;

int main() {
    Integer num1(5);
    Integer num2;

    cout << "Enter second integer: ";
    cin >> num2;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    Integer result1 = num1 + num2;
    cout << "num1 + num2: " << result1 << endl;

    Integer result2 = -num1;
    cout << "-num1: " << result2 << endl;

    Integer result3 = ++num2;
    cout << "num1++: " << result3 << endl;

    cout << "Size of Integer without #pragma pack(1): " << sizeof(Integer) << endl;

    #pragma pack(1)
    cout << "Size of Integer with #pragma pack(1): " << sizeof(Integer) << endl;
    #pragma pack()

    return 0;
}
