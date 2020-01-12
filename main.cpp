#include <gtest/gtest.h>

TEST(example, equal) {
	const int val1 = 0;
	const int val2 = 1;
	ASSERT_EQ(val1, val2);
	ASSERT_FALSE(val1 != val2);
}

int main(int argc, const char* argv[]) {
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
