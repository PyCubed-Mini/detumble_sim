cmake_minimum_required(VERSION 3.16)
project(detumble_sim)

#find_package(Eigen3 3.3 REQUIRED NO_MODULE)

#add_executable (main main.cpp)
#target_link_libraries (main Eigen3::Eigen)

set(CMAKE_CXX_STANDARD 14)

add_executable(detumble_sim main.cpp dynamics.cpp dynamics.h spacecraft.cpp spacecraft.h)