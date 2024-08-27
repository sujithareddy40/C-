#include <iostream>

class Point {
    int x, y;
public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // Overload == operator
    bool operator==(const Point& other) const {
        return (x == other.x && y == other.y);
    }
};

int main() {
    Point p1(1, 2), p2(1, 2), p3(3, 4);
    std::cout << "p1 and p2 are " << (p1 == p2 ? "equal" : "not equal") << std::endl;
    std::cout << "p1 and p3 are " << (p1 == p3 ? "equal" : "not equal") << std::endl;
    return 0;
}

