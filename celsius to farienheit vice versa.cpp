#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temp;
    int choice;
    cout << "Enter 1 to convert Celsius to Fahrenheit, 2 for Fahrenheit to Celsius: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temp) << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temp) << endl;
    } else {
        cout << "Invalid choice" << endl;
    }
    return 0;
} 

