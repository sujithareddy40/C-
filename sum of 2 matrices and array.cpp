#include <iostream>
using namespace std;

void sum(int arr1[], int arr2[], int result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

void sum(int mat1[][3], int mat2[][3], int result[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    // Sum of arrays
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arrResult[3];
    sum(arr1, arr2, arrResult, 3);
    cout << "Sum of arrays: ";
    for (int i = 0; i < 3; i++) {
        cout << arrResult[i] << " ";
    }
    cout << endl;

    // Sum of matrices
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int matResult[2][3];
    sum(mat1, mat2, matResult, 2);
    cout << "Sum of matrices: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matResult[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

