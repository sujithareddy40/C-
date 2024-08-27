#include <iostream>

// Function overloading
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    std::cout << "Sum of integers: " << add(10, 20) << std::endl;
    std::cout << "Sum of floats: " << add(10.5f, 20.3f) << std::endl;
    return 0;
}

