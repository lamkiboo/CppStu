cmake_minimum_required(VERSION 3.15)

project(CPP)

message("============ Options ============")
message("CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
message("CMAKE_BUILD_TYPE: Hello World!")

#头文件
include_directories(src/include)
#源文件
aux_source_directory(src/main dir_srcs)
#库文件
set(CMAKE_CXX_STANDARD 14)

set(WORK ${dir_srcs} src/include/LandOwner.h src/include/LandOwner.cpp src/include/LandOwner.h src/include/Student.cpp src/include/Student.h src/include/Integer.cpp src/include/Integer.h)

add_executable(CPP ${WORK})