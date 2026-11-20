# Wygenerowane z pomocą: Claude – konfiguracja testów (GoogleTest przez FetchContent), sprawdzona ręcznie
include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
# Zgodność bibliotek uruchomieniowych MSVC (/MD) między GoogleTest a projektem
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(budzet_testy
        TestWersja.cpp
)

target_link_libraries(budzet_testy PRIVATE budzet_core GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(budzet_testy)