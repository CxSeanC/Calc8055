cmake_minimum_required(VERSION 3.10)
project(VulnCalc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

# Collect source files (omit api_server.cpp to skip cpprestsdk)
file(GLOB_RECURSE SOURCES
    "src/*.cpp"
    "src/*.c"
)

# Optional: exclude files needing cpprestsdk
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/api_server.cpp")

add_executable(vulncalc ${SOURCES})

# Dependencies via pkg-config
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
pkg_check_modules(CURL REQUIRED libcurl)
pkg_check_modules(SPDLOG REQUIRED spdlog)
pkg_check_modules(JANSSON REQUIRED jansson)
pkg_check_modules(ARCHIVE REQUIRED libarchive)
find_package(OpenSSL REQUIRED)
find_package(Threads REQUIRED)
find_package(ZLIB REQUIRED)

include_directories(
    ${GTK3_INCLUDE_DIRS}
    ${CURL_INCLUDE_DIRS}
    ${SPDLOG_INCLUDE_DIRS}
    ${JANSSON_INCLUDE_DIRS}
    ${ARCHIVE_INCLUDE_DIRS}
)

target_link_libraries(vulncalc
    ${GTK3_LIBRARIES}
    ${CURL_LIBRARIES}
    ${SPDLOG_LIBRARIES}
    ${JANSSON_LIBRARIES}
    ${ARCHIVE_LIBRARIES}
    OpenSSL::SSL
    OpenSSL::Crypto
    Threads::Threads
    ZLIB::ZLIB
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

add_definitions(
    ${GTK3_CFLAGS_OTHER}
    ${CURL_CFLAGS_OTHER}
    ${SPDLOG_CFLAGS_OTHER}
    ${JANSSON_CFLAGS_OTHER}
    ${ARCHIVE_CFLAGS_OTHER}
)