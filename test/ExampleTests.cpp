#include "gtest/gtest.h"
#include "../Example.hpp"
// EXPECT is a more lenient version of ASSERT

TEST(ExampleTests, Haha) {
    EXPECT_TRUE(true);
    // ASSERT_TRUE(false);
    int a = 5, b = 1;
    EXPECT_EQ(
        Sum(a+b, 2),
        5
    );
}

// Fixtures
// TEST_F() {

// }