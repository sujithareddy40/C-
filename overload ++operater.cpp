#include <iostream>

class Counter {
    int count;
public:
    Counter() : count(0) {}

    // Overload ++ operator
    Counter operator++() {
        ++count;
        return *this;
    }

    int getCount() const {
        return count;
    }
};

int main() {
    Counter c;
    ++c;
    std::cout << "Count after increment: " << c.getCount() << std::endl;
    return 0;
}

