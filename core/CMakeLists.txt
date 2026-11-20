# Wygenerowane z pomocą: Claude – konfiguracja biblioteki core, sprawdzona ręcznie
add_library(budzet_core
        src/Wersja.cpp
)

target_include_directories(budzet_core PUBLIC include)

# Numer wersji z project() w głównym CMakeLists.txt
target_compile_definitions(budzet_core PRIVATE BUDZET_WERSJA="${PROJECT_VERSION}")

if(MSVC)
    target_compile_options(budzet_core PRIVATE /W4 /permissive-)
else()
    target_compile_options(budzet_core PRIVATE -Wall -Wextra -Wpedantic)
endif()