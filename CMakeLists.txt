cmake_minimum_required(VERSION 3.10)

# set the project name
project(PythonicLists VERSION 0.1)

# set std standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(PythonicLists STATIC
    classes/src/PythonicList.cpp
)

target_include_directories(PythonicLists
    PUBLIC
    ${PROJECT_SOURCE_DIR}/classes/headers
)

find_path(
	${PROJECT_SOURCE_DIR}/classes/headers
	${PROJECT_SOURCE_DIR}/classes/src
)

# add the executable
add_executable(PythonicListExample.out main.cpp)
target_link_libraries(PythonicListExample.out PythonicLists)
