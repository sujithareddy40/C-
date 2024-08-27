#include <iostream>

class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}

    // Overload << operator
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};

int main() {
    Complex c1(3, 4);
    std::cout << "Complex number: " << c1 << std::endl;
    return 0;
}

