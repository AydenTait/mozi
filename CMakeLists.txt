CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
project(mozi_ctl)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(tests)
add_subdirectory(src)
add_executable(mozi_ctl main.cpp)

include_directories(src/include)
target_include_directories(mozi_ctl PUBLIC src/include)

