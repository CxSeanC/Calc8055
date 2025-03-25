cmake_minimum_required(VERSION 3.10)
project(VulnCalc)

set(CMAKE_CXX_STANDARD 17)

# Collect source files
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.c")

add_executable(vulncalc ${SOURCES})

# Dependencies
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
pkg_check_modules(CURL REQUIRED libcurl)
pkg_check_modules(SPDLOG REQUIRED spdlog)
pkg_check_modules(JANSSON REQUIRED jansson)
pkg_check_modules(ARCHIVE REQUIRED libarchive)
find_package(Boost REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(Threads REQUIRED)

# Include directories
include_directories(
    ${GTK3_INCLUDE_DIRS}
    ${CURL_INCLUDE_DIRS}
    ${SPDLOG_INCLUDE_DIRS}
    ${JANSSON_INCLUDE_DIRS}
    ${ARCHIVE_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
)

# Link libraries explicitly
target_link_libraries(vulncalc
    ${GTK3_LIBRARIES}
    ${CURL_LIBRARIES}
    ${SPDLOG_LIBRARIES}
    ${JANSSON_LIBRARIES}
    ${ARCHIVE_LIBRARIES}
    ${Boost_LIBRARIES}
    OpenSSL::SSL
    OpenSSL::Crypto
    Threads::Threads
    ZLIB::ZLIB
    iconv
    dl
    m
    rt
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
    X11
    Xext
    Xinerama
    Xi
    Xrandr
    Xcursor
    Xcomposite
    Xdamage
    Xtst
    freetype
    fontconfig
)
