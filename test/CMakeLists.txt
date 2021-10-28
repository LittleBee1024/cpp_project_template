# Making an executable
add_executable(unit_tests
  main.cpp
  test_example.cpp
  test_hello.cpp
)

target_link_libraries(unit_tests
  PRIVATE
    example
    gtest
    gmock
    pthread
)

