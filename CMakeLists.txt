cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(MatrixCalc)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(matrixCalc src/main.cpp src/matrix.cpp)

add_executable(matrixCalcTest src/matrix.cpp test/test.cpp)

target_include_directories(matrixCalcTest PRIVATE ${PROJECT_SOURCE_DIR}/include)

enable_testing()

add_test(NAME matrixCalcTest COMMAND matrixCalcTest)
