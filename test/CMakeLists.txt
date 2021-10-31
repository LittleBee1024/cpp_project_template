# Making an executable
file(GLOB_RECURSE TEST_CPP ${CMAKE_CURRENT_LIST_DIR} "*.cpp")
add_executable(unit_tests ${TEST_CPP})

target_link_libraries(unit_tests
  PRIVATE
    example
    gtest
    gmock
    pthread
)

