cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

set(CMAKE_CXX_STANDARD 20)

add_library(calculator src/calculator.cpp)
target_include_directories(calculator PUBLIC include)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_executable(unit_tests tests/test_unit.cpp)
target_link_libraries(unit_tests calculator gtest_main)

add_test(NAME unit_tests COMMAND unit_tests)

add_executable(integration_tests tests/test_integration.cpp)
target_link_libraries(integration_tests calculator gtest_main)

add_test(NAME integration_tests COMMAND integration_tests)
