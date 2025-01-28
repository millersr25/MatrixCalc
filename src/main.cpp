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
    matrix2[0][1] = 1;
    matrix2[0][2] = 1;
    matrix2[1][0] = 1;
    matrix2[1][1] = 1;
    matrix2[1][2] = 1;
    matrix2[2][0] = 1;
    matrix2[2][1] = 1;
    matrix2[2][2] = 1;

    Matrix matrix3 = addMatrices(matrix1, matrix2);

    Matrix matrix4 = subtractMatrices(matrix1, matrix2);

    Matrix matrix6 = createMatrix(2, 2);
    matrix6[0][0] = 1;
    matrix6[0][1] = 2;
    matrix6[1][0] = 3;
    matrix6[1][1] = 4;

    Matrix matrix7 = createMatrix(2, 2);
    matrix7[0][0] = 5;
    matrix7[0][1] = 6;
    matrix7[1][0] = 7;
    matrix7[1][1] = 8;

    Matrix matrix8 = multiplyMatrices(matrix6, matrix7);    

    return 0;
}