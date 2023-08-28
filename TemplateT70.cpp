#include<iostream>
using namespace std;
template <typename T, size_t Rows, size_t Cols>
void matrixMultiply(const T (&matrix1)[Rows][Cols], const T (&matrix2)[Cols][Rows], T (&result)[Rows][Rows]) {
    for (size_t i = 0; i < Rows; ++i) {
        for (size_t j = 0; j < Rows; ++j) {
            result[i][j] = 0;
            for (size_t k = 0; k < Cols; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    matrixMultiply(matrix1, matrix2, result);

    std::cout << "Resulting matrix:" << std::endl;
    for (size_t i = 0; i < 2; ++i) {
        for (size_t j = 0; j < 2; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}