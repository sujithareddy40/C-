#include <iostream>

class Matrix {
    int mat[2][2];
public:
    Matrix(int a, int b, int c, int d) {
        mat[0][0] = a; mat[0][1] = b;
        mat[1][0] = c; mat[1][1] = d;
    }

    // Overload * operator
    Matrix operator*(const Matrix& other) {
        Matrix result(0, 0, 0, 0);
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result.mat[i][j] = mat[i][0] * other.mat[0][j] + mat[i][1] * other.mat[1][j];
            }
        }
        return result;
    }

    void display() const {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix m1(1, 2, 3, 4), m2(5, 6, 7, 8);
    Matrix m3 = m1 * m2;
    std::cout << "Product of matrices:" << std::endl;
    m3.display();
    return 0;
}

