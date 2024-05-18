cmake_minimum_required(VERSION 3.25)

project(ALGO_C LANGUAGES C)

enable_testing()

add_library(assert
    assert.c
)
target_include_directories(assert PUBLIC
    ${CMAKE_SOURCE_DIR}
)

add_library(vector
    vector.c
)
target_include_directories(vector PUBLIC
    ${CMAKE_SOURCE_DIR}
)

add_library(linked_list
    linked_list.c
)
target_include_directories(linked_list PUBLIC
    ${CMAKE_SOURCE_DIR}
)

add_library(vector_and_linkedlist
    vector_and_linkedlist.c
)
target_include_directories(vector_and_linkedlist PUBLIC
    ${CMAKE_SOURCE_DIR}
)

add_executable(test_vector
    ${CMAKE_SOURCE_DIR}/tests/test_vector.c
)
target_include_directories(test_vector PRIVATE
    ${CMAKE_SOURCE_DIR}
)
target_link_libraries(test_vector
    vector
    assert
)
add_test(
    NAME test_vector
    COMMAND ${CMAKE_BINARY_DIR}/test_vector
)

add_executable(test_linked_list
    ${CMAKE_SOURCE_DIR}/tests/test_linked_list.c
)
target_link_libraries(test_linked_list
    linked_list
    assert
)
add_test(
    NAME test_linked_list
    COMMAND ${CMAKE_BINARY_DIR}/test_linked_list
)

add_executable(test_vector_and_linkedlist
    ${CMAKE_SOURCE_DIR}/tests/test_vector_and_linkedlist.c
)
target_link_libraries(test_vector_and_linkedlist
    vector_and_linkedlist
    assert
)
add_test(
    NAME test_vector_and_linkedlist
    COMMAND ${CMAKE_BINARY_DIR}/test_vector_and_linkedlist
)