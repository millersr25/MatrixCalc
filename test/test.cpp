#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "matrix.h"

TEST_CASE("Testing matrix creation with valid dimensions", "[CreateMatrix][valid]") {
    Matrix matrix1 = createMatrix(3, 3);
    Matrix matrix2 = createMatrix(5, 5);
    Matrix matrix3 = createMatrix(1, 3);
    Matrix matrix4 = createMatrix(3, 1);
    REQUIRE(matrix1.size() == 3);
    REQUIRE(matrix2.size() == 5);
    REQUIRE(matrix3.size() == 1);
    REQUIRE(matrix4.size() == 3);
    REQUIRE(matrix1[0].size() == 3);
    REQUIRE(matrix2[0].size() == 5);
    REQUIRE(matrix3[0].size() == 3);
    REQUIRE(matrix4[0].size() == 1);
}

TEST_CASE("Testing matrix creation with invalid dimensions", "[CreateMatrix][invalid]") {
    REQUIRE_THROWS(createMatrix(-1, 3));
    REQUIRE_THROWS(createMatrix(3, -1));
    REQUIRE_THROWS(createMatrix(0, 0)); 
    REQUIRE_THROWS(createMatrix(0, 3));
    REQUIRE_THROWS(createMatrix(3, 0));
}

TEST_CASE("Testing matrix addition with valid dimensions", "[AddMatrices][valid]") {
    Matrix matrix1 = createMatrix(3, 3);
    matrix1[0][0] = 2;
    matrix1[0][1] = 2;
    matrix1[0][2] = 2;
    matrix1[1][0] = 2;
    matrix1[1][1] = 2;
    matrix1[1][2] = 2;
    matrix1[2][0] = 2;
    matrix1[2][1] = 2;
    matrix1[2][2] = 2;

    Matrix matrix2 = createMatrix(3, 3);
    matrix2[0][0] = 2;
    matrix2[0][1] = 2;
    matrix2[0][2] = 2;
    matrix2[1][0] = 2;
    matrix2[1][1] = 2;
    matrix2[1][2] = 2;
    matrix2[2][0] = 2;
    matrix2[2][1] = 2;
    matrix2[2][2] = 2;
    Matrix result = addMatrices(matrix1, matrix2);
    REQUIRE(result.size() == 3);
    REQUIRE(result[0].size() == 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            REQUIRE(result[i][j] == 4);
        }
    }
}

TEST_CASE("Testing matrix addition with invalid dimensions", "[AddMatrices][invalid]") {
    // Test mismatched dimensions
    Matrix matrix1 = createMatrix(3, 3);
    Matrix matrix2 = createMatrix(1, 3);
    REQUIRE_THROWS(addMatrices(matrix1, matrix2));
    
    // Test different column counts
    Matrix matrix3 = createMatrix(2, 3);
    Matrix matrix4 = createMatrix(2, 4);
    REQUIRE_THROWS(addMatrices(matrix3, matrix4));
}