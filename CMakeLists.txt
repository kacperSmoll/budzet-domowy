# Wygenerowane z pomocą: Claude – główna konfiguracja CMake, sprawdzona ręcznie
cmake_minimum_required(VERSION 3.24)

project(BudzetDomowy
        VERSION 0.1.0
        DESCRIPTION "Budżet domowy z raportami"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Pliki źródłowe są w UTF-8 (polskie znaki w napisach)
if(MSVC)
    add_compile_options(/utf-8)
endif()

add_subdirectory(core)