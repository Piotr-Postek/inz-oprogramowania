cmake_minimum_required(VERSION 3.23)
project(INZ_Oprogramowania)

set(CMAKE_CXX_STANDARD 14)

include_directories(../src)

add_executable(inz-oprogramowania
        ../main.cpp
        Zwierze.cpp
        Zwierze.h
        KartaZwierzecia.cpp
        KartaZwierzecia.h
        Wizyta.cpp
        Wizyta.h
        Lekarz.cpp
        Lekarz.h
        Recepcjonistka.cpp
        Recepcjonistka.h
        Recepta.cpp
        Recepta.h
        Skierowanie.cpp
        Skierowanie.h
        Termin.cpp
        Termin.h
        ../panel/panelPacjenta.cpp
        ../panel/panelLekarza.cpp
        ../panel/panelRecepcjonistki.cpp
        ../panel/panelLekarza.h
        ../panel/panelPacjenta.h
        ../panel/panelRecepcjonistki.h
)