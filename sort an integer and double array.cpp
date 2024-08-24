#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int n) {
    sort(arr, arr + n);
}

void sortArray(double arr[], int n) {
    sort(arr, arr + n);
}

int main() {
    int intArr[] = {3, 1, 4, 1, 5};
    double doubleArr[] = {3.1, 2.2, 1.3, 4.4, 0.5};

    sortArray(intArr, 5);
    sortArray(doubleArr, 5);

    cout << "Sorted integer array: ";
    for (int i = 0; i < 5; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    cout << "Sorted double array: ";
    for (int i = 0; i < 5; i++) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;

    return 0;
}

