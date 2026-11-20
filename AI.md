# Użycie narzędzi AI w projekcie

Zestawienie zgodne z zasadami przedmiotu: narzędzie, cel użycia, pliki i sposób weryfikacji.
Szczegółowy rejestr per plik znajduje się również w README.md.

| Narzędzie | Do czego | Pliki | Jak sprawdzono poprawność |
|---|---|---|---|
| Claude | szablon .gitignore | `.gitignore` | przegląd ręczny; `git status` nie pokazuje plików IDE ani katalogów budowania |
| Claude | dokumentacja | `README.md`, `AI.md` | przegląd ręczny i własne poprawki treści README; polecenia budowania i testów uruchomione lokalnie |
| Claude | konfiguracja budowania i testów | `CMakeLists.txt`, `core/CMakeLists.txt`, `tests/CMakeLists.txt` | budowanie lokalne (CLion i terminal, MSVC) i w GitHub Actions |
| Claude | funkcja wersji i test kontrolny | `core/include/budzet/Wersja.hpp`, `core/src/Wersja.cpp`, `tests/TestWersja.cpp` | uruchomienie testów lokalnie i w CI |
| Claude | pipeline CI | `.github/workflows/ci.yml` | zielony przebieg na GitHub Actions |