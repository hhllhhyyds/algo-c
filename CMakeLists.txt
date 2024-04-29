cmake_minimum_required(VERSION 3.25)

project(ALGO_C LANGUAGES C)

add_library(vector
    vector.c
)

target_link_directories(vector PUBLIC
    ${CMAKE_SOURCE_DIR}
)

add_executable(algo_c
    main.c
)
target_include_directories(algo_c PRIVATE
    ${CMAKE_SOURCE_DIR}
)
target_link_libraries(algo_c
    vector
)