cmake_minimum_required(VERSION 3.11)
project(RockPaperScissors)

set(CMAKE_CXX_STANDARD 14) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})

add_subdirectory("lib/SFML")
set(SFML_INCS "lib/SFML/include")
link_directories("${CMAKE_BINARY_DIR}/lib/SFML/lib")

add_executable(RockPaperScissors src/main.cpp)
target_include_directories(RockPaperScissors PRIVATE ${SFML_INCS})
target_link_libraries(RockPaperScissors sfml-graphics)
