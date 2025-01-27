#include "matrix.h"
#include <iostream>

Matrix createMatrix(int rows, int cols) {
    Matrix matrix(rows, std::vector<double>(cols, 0.0));
    
    // Print the matrix
    std::cout << "Printing matrix" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix created successfully" << std::endl;
    std::cout << std::endl;
    return matrix;
}

Matrix addMatrices(const Matrix &m1, const Matrix &m2) {
    return Matrix();
}

Matrix subtractMatrices(const Matrix &m1, const Matrix &m2) {
    return Matrix();
}

Matrix multiplyMatrices(const Matrix &m1, const Matrix &m2) {
    return Matrix();
}