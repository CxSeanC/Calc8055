cmake_minimum_required(VERSION 3.10)
project(VulnCalc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

# Add local lib source folders
add_subdirectory(libs/jansson)
add_subdirectory(libs/spdlog)
add_subdirectory(libs/libarchive)
# cpprestsdk removed
add_subdirectory(libs/openssl)
add_subdirectory(libs/zlib)
add_subdirectory(libs/ncurses)
add_subdirectory(libs/boost)
add_subdirectory(libs/pkgconf)
add_subdirectory(libs/gtk)

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
    # libs/cpprestsdk/Release/include removed
    libs/openssl/include
    libs/zlib
    libs/ncurses/include
    libs/boost
    libs/pkgconf
    libs/gtk
)

# Link libraries
target_link_libraries(vulncalc
    jansson
    spdlog
    archive
    # cpprest removed
    ssl
    crypto
    z
    ncurses
    boost
    pkgconf
    gtk-3
    iconv
    gio-2.0
    gobject-2.0
    gmodule-2.0
    atk-1.0
    pango-1.0
    cairo
    gdk-3
    gdk_pixbuf-2.0
    glib-2.0
    pangocairo-1.0
)

# Definitions
add_definitions(
    -DGTK3
    -DCURL
    -DSPDLOG
    -DJANSSON
    -DARCHIVE
)