#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double factorial(double n) {
    if (n <= 1.0)
        return 1.0;
    else
        return n * factorial(n - 1.0);
}

int main() {
    int intNum = 5;
    double doubleNum = 5.0;

    cout << "Factorial of integer " << intNum << " is: " << factorial(intNum) << endl;
    cout << "Factorial of floating-point " << doubleNum << " is: " << factorial(doubleNum) << endl;

    return 0;
}

