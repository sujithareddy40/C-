#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string course;
    int year;
    double marks;

public:
    // Constructor
    Student(string sName, int sRollNumber, string sCourse, int sYear, double sMarks) {
        name = sName;
        rollNumber = sRollNumber;
        course = sCourse;
        year = sYear;
        marks = sMarks;
        cout << "Student " << name << " enrolled." << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student " << name << " record deleted." << endl;
    }

    // Method to display student details
    void displayInfo() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
        cout << "Year: " << year << endl;
        cout << "Marks: " << marks << endl;
    }

    // Method to update marks
    void updateMarks(double newMarks) {
        marks = newMarks;
        cout << "Marks updated to " << marks << "." << endl;
    }
};

int main() {
    // Creating a student object
    Student student1("Alice Johnson", 101, "Computer Science", 2, 85.5);

    // Displaying student information
    student1.displayInfo();

    // Updating marks
    student1.updateMarks(90.0);

    // Displaying updated information
    student1.displayInfo();

    return 0;
}

