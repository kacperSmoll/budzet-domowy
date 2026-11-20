// Wygenerowane z pomocą: Claude – pierwszy test kontrolny, sprawdzony uruchomieniem
#include <gtest/gtest.h>

#include <regex>

#include "budzet/Wersja.hpp"

TEST(Wersja, NieJestPusta) {
    EXPECT_FALSE(budzet::wersjaProgramu().empty());
}

TEST(Wersja, MaFormatWersjonowaniaSemantycznego) {
    const std::regex wzorzec(R"(\d+\.\d+\.\d+)");
    EXPECT_TRUE(std::regex_match(budzet::wersjaProgramu(), wzorzec));
}