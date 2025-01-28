#include "matrix.h"
#include <iostream>

Matrix createMatrix(int rows, int cols) {
    if (rows <= 0 || cols <= 0) {
        throw std::invalid_argument("Rows and columns must be positive integers and greater than 0");
    }

    Matrix matrix(rows, std::vector<double>(cols, 0.0));
    
    // // Print the matrix
    // std::cout << "Printing matrix" << std::endl;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         std::cout << matrix[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // std::cout << "Matrix created successfully" << std::endl;
    // std::cout << std::endl;

    return matrix;
}

Matrix addMatrices(const Matrix &m1, const Matrix &m2) {
    // Check if matrices are empty
    if (m1.empty() || m2.empty()) {
        throw std::invalid_argument("Matrices cannot be empty");
    }

    // Check if matrices have valid dimensions
    if (m1[0].empty() || m2[0].empty()) {
        throw std::invalid_argument("Matrices cannot have zero columns");
    }

    int m1Rows = m1.size();
    int m1Cols = m1[0].size();
    int m2Rows = m2.size();
    int m2Cols = m2[0].size();

    // Check if matrices have matching dimensions
    if (m1Rows != m2Rows || m1Cols != m2Cols) {
        throw std::invalid_argument("Matrices must have the same dimensions");
    }

    Matrix result(m1Rows, std::vector<double>(m1Cols, 0.0));

    // Add corresponding elements
    for (int i = 0; i < m1Rows; i++) {
        for (int j = 0; j < m1Cols; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // // Print the result matrix
    // std::cout << "Result matrix:" << std::endl;
    // for (std::size_t i = 0; i < result.size(); i++) {
    //     for (std::size_t j = 0; j < result[0].size(); j++) {
    //         std::cout << result[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // std::cout << std::endl;

    return result;
}

Matrix subtractMatrices(const Matrix &m1, const Matrix &m2) {
    // Check if matrices are empty
    if (m1.empty() || m2.empty()) {
        throw std::invalid_argument("Matrices cannot be empty");
    }

    // Check if matrices have valid dimensions
    if (m1[0].empty() || m2[0].empty()) {
        throw std::invalid_argument("Matrices cannot have zero columns");
    }

    int m1Rows = m1.size();
    int m1Cols = m1[0].size();
    int m2Rows = m2.size();
    int m2Cols = m2[0].size();

    // Check if matrices have matching dimensions
    if (m1Rows != m2Rows || m1Cols != m2Cols) {
        throw std::invalid_argument("Matrices must have the same dimensions");
    }

    Matrix result(m1Rows, std::vector<double>(m1Cols, 0.0));

    // Subtract corresponding elements
    for (int i = 0; i < m1Rows; i++) {
        for (int j = 0; j < m1Cols; j++) {
            result[i][j] = m1[i][j] - m2[i][j];
        }
    }

    // // Print the result matrix
    // std::cout << "Result matrix:" << std::endl;
    // for (std::size_t i = 0; i < result.size(); i++) {
    //     for (std::size_t j = 0; j < result[0].size(); j++) {
    //         std::cout << result[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // std::cout << std::endl;

    return result;
}

Matrix multiplyMatrices(const Matrix &m1, const Matrix &m2) {
    // Check if matrices are empty
    if (m1.empty() || m2.empty()) {
        throw std::invalid_argument("Matrices cannot be empty");
    }

    // Check if matrices have valid dimensions
    if (m1[0].empty() || m2[0].empty()) {
        throw std::invalid_argument("Matrices cannot have zero columns");
    }

    int m1Rows = m1.size();
    int m1Cols = m1[0].size();
    int m2Rows = m2.size();
    int m2Cols = m2[0].size();

    // Check if matrices have matching dimensions
    if (m1Cols != m2Rows) {
        throw std::invalid_argument("Matrices must have the same dimensions");
    }

    Matrix result(m1Rows, std::vector<double>(m2Cols, 0.0));

    // Multiply matrices
    for (int i = 0; i < m1Rows; i++) {
        for (int j = 0; j < m2Cols; j++) {
            for (int k = 0; k < m1Cols; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // // Print the result matrix
    // std::cout << "Result matrix:" << std::endl;
    // for (std::size_t i = 0; i < result.size(); i++) {
    //     for (std::size_t j = 0; j < result[0].size(); j++) {
    //         std::cout << result[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // std::cout << std::endl;

    return result;
}