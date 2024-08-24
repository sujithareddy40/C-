#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exponent) {
    return pow(base, exponent);
}

double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    int intBase = 2, intExp = 3;
    double doubleBase = 2.5;

    cout << "Power of integer " << intBase << " to " << intExp << " is: " << power(intBase, intExp) << endl;
    cout << "Power of floating-point " << doubleBase << " to " << intExp << " is: " << power(doubleBase, intExp) << endl;

    return 0;
}

