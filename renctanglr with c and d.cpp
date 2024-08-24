#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Rectangle created with length " << length << " and width " << width << "." << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle destroyed." << endl;
    }

    // Method to calculate area
    double area() {
        return length * width;
    }

    // Method to calculate perimeter
    double perimeter() {
        return 2 * (length + width);
    }

    // Method to display rectangle properties
    void displayInfo() {
        cout << "Rectangle Details:" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    // Creating a rectangle object
    Rectangle rect(5.0, 3.0);

    // Displaying rectangle information
    rect.displayInfo();

    return 0;
}

