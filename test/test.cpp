#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "matrix.h"

TEST_CASE("Testing matrix creation", "[CreateMatrix]") {
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