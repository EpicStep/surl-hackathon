cmake_minimum_required(VERSION 3.16)
project(surl)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG f4622efcb59d84071ae11404ae61bd821c1c344b) # the commit hash for 1.6.2
FetchContent_MakeAvailable(cpr)

set(CMAKE_CXX_STANDARD 17)
add_executable(surl main.cpp)

target_link_libraries(surl PRIVATE cpr::cpr)
