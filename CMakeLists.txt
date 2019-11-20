cmake_minimum_required(VERSION 2.8.12)
project(demo-ci-conan)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

set(SOURCES src/main.cpp)

add_executable(App3 ${SOURCES})
set_target_properties(App3 PROPERTIES CXX_STANDARD 17)
target_link_libraries(App3 PRIVATE CONAN_PKG::libC CONAN_PKG::libD)

install(TARGETS App3
        RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
        ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

