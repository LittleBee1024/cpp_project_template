# Making a library
file(GLOB_RECURSE SRC_CPP ${CMAKE_CURRENT_LIST_DIR} "*.cpp")
add_library(example SHARED ${SRC_CPP})

target_include_directories(example
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)
