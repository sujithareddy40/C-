#include <iostream>

class Functor {
public:
    // Overload () operator
    void operator()(int x) {
        std::cout << "Functor called with value: " << x << std::endl;
    }
};

int main() {
    Functor func;
    func(5);
    return 0;
}

