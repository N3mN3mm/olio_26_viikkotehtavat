cmake_minimum_required(VERSION 3.16)

project(olio_viikkotehtava_4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio_viikkotehtava_4 main.cpp
    pankkitili.h pankkitili.cpp
    luottotili.h luottotili.cpp
    asiakas.h asiakas.cpp)

include(GNUInstallDirs)
install(TARGETS olio_viikkotehtava_4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
