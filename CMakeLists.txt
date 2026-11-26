project(RockPaperScissors)
cmake_minimum_required(VERSION 3.11)
# Require modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#### Setup Directories ####
#Main output directory
SET(OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")
# Ouput all DLLs from all libs into main build folder
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})

#### Add External Dependencies ####
add_subdirectory("lib/SFML")
set(SFML_INCS "lib/SFML/include")
link_directories("${CMAKE_BINARY_DIR}/lib/SFML/lib")

add_subdirectory("lib/box2d")
set(B2D_INCS "lib/box2d/include")
link_directories("${CMAKE_BINARY_DIR}/lib/box2d/lib")

#### Engine ####
add_library(engine STATIC
    lib/engine/game_system.cpp 
    lib/engine/renderer.cpp 
    lib/engine/ecm.cpp
    lib/engine/physics.cpp
)
target_include_directories(engine INTERFACE lib/engine ${SFML_INCS} ${B2D_INCS})
target_link_libraries(engine sfml-graphics box2d)

#### executable ####
add_executable(RockPaperScissors
    src/main.cpp 
    src/game/scenes.cpp
)
target_include_directories(RockPaperScissors PRIVATE ${SFML_INCS} lib/engine)
target_link_libraries(RockPaperScissors sfml-graphics engine)
set_target_properties(RockPaperScissors 
    PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY
    ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$(Configuration)
)
add_custom_target(copy_resources ALL COMMAND ${CMAKE_COMMAND} 
  -E copy_directory
    "${PROJECT_SOURCE_DIR}/resources"
    ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/resources
)
add_dependencies(RockPaperScissors copy_resources)