cmake_minimum_required(VERSION 3.10)

project(MK7-Memory CXX)

include(CheckIncludeFileCXX)
set(CMAKE_REQUIRED_QUIET ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE HEADERS "include/*.hpp")

foreach(HEADER ${HEADERS})
    get_filename_component(HEADER_NAME ${HEADER} NAME)
    check_include_file_cxx("${HEADER}" ${HEADER_NAME}_CHECK)

    if (${HEADER_NAME}_CHECK)
        message(STATUS "${HEADER_NAME} succeeded.")
    else()
        message(FATAL_ERROR "${HEADER_NAME} failed.")
    endif()
endforeach()