#include <iostream>
#include <cmath>
using namespace std;

int absolute(int n) {
    return abs(n);
}

double absolute(double n) {
    return fabs(n);
}

int main() {
    int intNum = -5;
    double doubleNum = -5.5;

    cout << "Absolute value of integer " << intNum << " is: " << absolute(intNum) << endl;
    cout << "Absolute value of floating-point " << doubleNum << " is: " << absolute(doubleNum) << endl;

    return 0;
}

