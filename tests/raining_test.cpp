#include <catch2/catch_test_macros.hpp>
#include "../src/raining.hpp"

TEST_CASE("wantsAnother recognizes yes inputs") {
    REQUIRE(wantsAnother("y"));
    REQUIRE(wantsAnother("Y"));
    REQUIRE(wantsAnother("yes"));
    REQUIRE(wantsAnother("Yes"));
}

TEST_CASE("wantsAnother rejects no inputs") {
    REQUIRE_FALSE(wantsAnother("n"));
    REQUIRE_FALSE(wantsAnother("no"));
    REQUIRE_FALSE(wantsAnother("No"));
    REQUIRE_FALSE(wantsAnother("whatever"));
}