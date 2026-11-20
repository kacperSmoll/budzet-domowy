# Budżet domowy z raportami

Aplikacja desktopowa w C++ z interfejsem graficznym (Dear ImGui + ImPlot) dla osób,
które chcą kontrolować swoje domowe finanse. Projekt na przedmiot Zaawansowane
Programowanie Obiektowe (AGH, AiR, 2026/2027).

> Status: w trakcie realizacji.

## Funkcje
- ewidencja przychodów i wydatków w kategoriach,
- import wyciągów bankowych z plików CSV,
- miesięczne limity budżetowe z ostrzeżeniami,
- raporty miesięczne z wykresami,
- zapis danych w pliku JSON.

## Budowanie i uruchomienie
**Platforma:** Windows 10/11 x64.

**Wymagania:**
- Git,
- Visual Studio Build Tools 2022 lub 2026 z obciążeniem „Programowanie aplikacji klasycznych w C++”,
- CMake 3.24 lub nowszy (dołączony do Build Tools).

## Testy

Po zbudowaniu projektu wszystkie testy uruchamia jedno polecenie:

```
ctest --test-dir build -C Release --output-on-failure
```

Testy uruchamiają się też automatycznie w GitHub Actions przy każdym pushu do gałęzi `main`.

## Architektura i diagram klas
_Do uzupełnienia._

## Mapa koncepcji obiektowych
| Koncepcja | Klasy i pliki | Uzasadnienie |
|---|---|---|
| _do uzupełnienia_ | | |

## Rejestr użycia LLM
| Plik / fragment | Narzędzie | Do czego użyto i jak zweryfikowano |
|---|---|---|
| `.gitignore` | Claude | wygenerowany plik; sprawdzony ręcznie pod kątem CLion i MSVC |
| `README.md`, `AI.md` | Claude | wygenerowana treść dokumentacji; README poprawione ręcznie, polecenia przetestowane |
| `CMakeLists.txt`, `core/CMakeLists.txt`, `tests/CMakeLists.txt` | Claude | wygenerowana konfiguracja CMake i GoogleTest; sprawdzona budowaniem w CLion i w terminalu (MSVC) oraz w CI |
| `core/include/budzet/Wersja.hpp`, `core/src/Wersja.cpp` | Claude | wygenerowana funkcja `wersjaProgramu()`; sprawdzona testami |
| `tests/TestWersja.cpp` | Claude | wygenerowany test kontrolny; sprawdzony uruchomieniem lokalnie i w CI |
| `.github/workflows/ci.yml` | Claude | wygenerowany pipeline CI; sprawdzony zielonym przebiegiem na GitHub Actions |