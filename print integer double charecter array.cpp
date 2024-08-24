#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {1, 2, 3, 4};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4};
    char charArr[] = {'a', 'b', 'c', 'd'};

    cout << "Integer array: ";
    printArray(intArr, 4);
    
    cout << "Double array: ";
    printArray(doubleArr, 4);
    
    cout << "Character array: ";
    printArray(charArr, 4);

    return 0;
}

