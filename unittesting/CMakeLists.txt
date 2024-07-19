cmake_minimum_required(VERSION 3.22)
project(hellobinary)
set(CMAKE_CXX_FLAGS "-g")
set(CMAKE_CXX_STANDARD 14)
find_package(GTest REQUIRED)
enable_testing()
set(SRC_FILES calc.cpp)
set(SRC_TEST calctest.cpp)
add_executable(
    ${PROJECT_NAME}
    ${SRC_FILES}
    ${SRC_TEST}
)
add_executable(
    hellobinaryapp
    ${SRC_FILES}
    main.cpp

)
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest
    GTest::gmock_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})