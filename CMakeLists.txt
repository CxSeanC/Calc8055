cmake_minimum_required(VERSION 3.10)
project(VulnCalc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

# Add local lib source folders
add_subdirectory(libs/jansson)
add_subdirectory(libs/spdlog)
add_subdirectory(libs/libarchive)
add_subdirectory(libs/openssl)
add_subdirectory(libs/zlib)
add_subdirectory(libs/ncurses)
add_subdirectory(libs/pkgconf)

# Collect source files
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.c")

# Exclude files needing cpprestsdk
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/api_server.cpp")

add_executable(vulncalc ${SOURCES})

# Include directories
include_directories(
    libs/jansson/src
    libs/spdlog/include
    libs/libarchive/libarchive
    libs/openssl/include
    libs/zlib
    libs/ncurses/include
    libs/pkgconf
    libs/boost
)

# GTK pkg-config setup
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

# Link libraries
target_link_libraries(vulncalc
    jansson
    spdlog
    archive
    ssl
    crypto
    z
    ncurses
    pkgconf
    ${GTK3_LIBRARIES}
)

# Definitions
add_definitions(
    -DGTK3
    -DCURL
    -DSPDLOG
    -DJANSSON
    -DARCHIVE
)
