cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)
project(TD1 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(td1 TD1/src/main.cpp TD1/src/fraction.cpp TD1/src/utils.cpp)
target_include_directories(td1 PUBLIC "TD1/src/")

include(CPack)

add_executable(td2_exo1 TD2/exo1/main.cpp TD2/exo1/fonctions_exo1.cpp)
target_include_directories(td2_exo1 PUBLIC "TD2/exo1")

add_executable(td2_exo2 TD2/exo2/main.cpp TD2/exo2/fonctions_exo2.cpp)
target_include_directories(td2_exo2 PUBLIC "TD2/exo2")

add_executable(td2_exo3 TD2/exo3/main.cpp TD2/exo3/fonctions_exo3.cpp )
target_include_directories(td2_exo3 PUBLIC "TD2/exo3")

add_executable(td2_exo4 TD2/exo4/main.cpp )
target_include_directories(td2_exo4 PUBLIC "TD2/exo4")
