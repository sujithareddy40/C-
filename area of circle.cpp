#include <iostream>
#include <cmath>
using namespace std;

double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << areaOfCircle(radius) << endl;
    return 0;
}

