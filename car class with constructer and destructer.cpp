#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    string color;

public:
    // Constructor
    Car(string carMake, string carModel, int carYear, string carColor) {
        make = carMake;
        model = carModel;
        year = carYear;
        color = carColor;
        cout << "Car " << make << " " << model << " created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car " << make << " " << model << " destroyed." << endl;
    }

    // Method to display car details
    void displayInfo() {
        cout << "Car Details:" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
    }

    // Method to start the car
    void start() {
        cout << make << " " << model << " started." << endl;
    }

    // Method to stop the car
    void stop() {
        cout << make << " " << model << " stopped." << endl;
    }
};

int main() {
    // Creating a car object
    Car myCar("Toyota", "Corolla", 2020, "Red");

    // Displaying car information
    myCar.displayInfo();

    // Starting and stopping the car
    myCar.start();
    myCar.stop();

    return 0;
}

