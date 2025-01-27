#include <iostream>
#include <vector>
#include "matrix.h"

int main() {
    Matrix matrix1 = createMatrix(3, 3);
    matrix1[0][0] = 1;
    matrix1[0][1] = 2;
    matrix1[0][2] = 3;
    matrix1[1][0] = 4;
    matrix1[1][1] = 5;
    matrix1[1][2] = 6;
    matrix1[2][0] = 7;
    matrix1[2][1] = 8;
    matrix1[2][2] = 9;

    Matrix matrix2 = createMatrix(3, 3);
    matrix2[0][0] = 1;
    matrix2[0][1] = 2;
    matrix2[0][2] = 3;
    matrix2[1][0] = 4;
    matrix2[1][1] = 5;
    matrix2[1][2] = 6;
    matrix2[2][0] = 7;
    matrix2[2][1] = 8;
    matrix2[2][2] = 9;

    Matrix matrix3 = addMatrices(matrix1, matrix2);
    return 0;
}