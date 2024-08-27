#include <iostream>

class Array {
    int arr[5];
public:
    Array() {
        for (int i = 0; i < 5; ++i) arr[i] = i + 1;
    }

    // Overload [] operator
    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    Array a;
    std::cout << "Element at index 2: " << a[2] << std::endl;
    a[2] = 10;
    std::cout << "Modified element at index 2: " << a[2] << std::endl;
    return 0;
}

