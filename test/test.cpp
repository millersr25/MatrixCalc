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

TEST_CASE("Testing matrix subtraction with valid dimensions", "[subMatrices][valid]") {
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
    Matrix result = subtractMatrices(matrix1, matrix2);
    REQUIRE(result.size() == 3);
    REQUIRE(result[0].size() == 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            REQUIRE(result[i][j] == 0);
        }
    }
}

TEST_CASE("Testing matrix subtraction with invalid dimensions", "[subMatrices][invalid]") {
    // Test mismatched dimensions
    Matrix matrix1 = createMatrix(3, 3);
    Matrix matrix2 = createMatrix(1, 3);
    REQUIRE_THROWS(subtractMatrices(matrix1, matrix2));
    
    // Test different column counts
    Matrix matrix3 = createMatrix(2, 3);
    Matrix matrix4 = createMatrix(2, 4);
    REQUIRE_THROWS(subtractMatrices(matrix3, matrix4));
}

TEST_CASE("Testing matrix multiplication with valid dimensions", "[multiplyMatrices][valid]") {
    Matrix matrix1 = createMatrix(2, 2);
    matrix1[0][0] = 1;
    matrix1[0][1] = 2;
    matrix1[1][0] = 3;
    matrix1[1][1] = 4;

    Matrix matrix2 = createMatrix(2, 2);
    matrix2[0][0] = 5;
    matrix2[0][1] = 6;
    matrix2[1][0] = 7;
    matrix2[1][1] = 8;

    Matrix result1 = multiplyMatrices(matrix1, matrix2);
    REQUIRE(result1.size() == 2);
    REQUIRE(result1[0].size() == 2);

    REQUIRE(result1[0][0] == 19);
    REQUIRE(result1[0][1] == 22);
    REQUIRE(result1[1][0] == 43);
    REQUIRE(result1[1][1] == 50);

    Matrix matrix3 = createMatrix(2, 3);
    matrix3[0][0] = 1;
    matrix3[0][1] = 2;
    matrix3[0][2] = 3;
    matrix3[1][0] = 4;
    matrix3[1][1] = 5;
    matrix3[1][2] = 6;      

    Matrix matrix4 = createMatrix(3, 2);
    matrix4[0][0] = 7;
    matrix4[0][1] = 8;
    matrix4[1][0] = 9;
    matrix4[1][1] = 10;
    matrix4[2][0] = 11;
    matrix4[2][1] = 12;
    
    Matrix result2 = multiplyMatrices(matrix3, matrix4);
    REQUIRE(result2.size() == 2);
    REQUIRE(result2[0].size() == 2);

    REQUIRE(result2[0][0] == 58);
    REQUIRE(result2[0][1] == 64);
    REQUIRE(result2[1][0] == 139);
    REQUIRE(result2[1][1] == 154);

    Matrix matrix5 = createMatrix(1, 2);
    matrix5[0][0] = 1;  
    matrix5[0][1] = 2;

    Matrix matrix6 = createMatrix(2, 3);
    matrix6[0][0] = 3;
    matrix6[0][1] = 4;
    matrix6[0][2] = 5;
    matrix6[1][0] = 6;
    matrix6[1][1] = 7;
    matrix6[1][2] = 8;

    Matrix result3 = multiplyMatrices(matrix5, matrix6);
    REQUIRE(result3.size() == 1);
    REQUIRE(result3[0].size() == 3);
    REQUIRE(result3[0][0] == 15);
    REQUIRE(result3[0][1] == 18);
    REQUIRE(result3[0][2] == 21);
}

TEST_CASE("Testing matrix multiplication with invalid dimensions", "[multiplyMatrices][invalid]") {
    // Test mismatched dimensions
    Matrix matrix1 = createMatrix(3, 3);
    Matrix matrix2 = createMatrix(1, 3);
    REQUIRE_THROWS(multiplyMatrices(matrix1, matrix2));
    
    // Test different column counts
    Matrix matrix3 = createMatrix(2, 3);
    Matrix matrix4 = createMatrix(2, 4);
    REQUIRE_THROWS(multiplyMatrices(matrix3, matrix4));
}