project(lab3)

add_executable(lab3
  ./lab3.cpp
  ./point.cpp
  ./square.cpp
  ./rectangle.cpp
  ./trapeze.cpp)

set(CMAKE_CXX_FLAGS
  "${CMAKE_CXX_FLAGS} -Wall -Wextra")
