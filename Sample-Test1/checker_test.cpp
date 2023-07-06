#include "pch.h"
#include "../TDD_StringSimilarity/checker.cpp"

TEST(SimilarityChecker, sameLength) {
	SimilarityChecker machine("DSA");
	int expected = 60;
	int actual = machine.getLengthScore("ASD");

	EXPECT_EQ(expected, actual);
}

TEST(SimilarityChecker, diffLengthOver2times) {
	SimilarityChecker machine("BB");
	int expected = 0;
	int actual = machine.getLengthScore("A");

	EXPECT_EQ(expected, actual);
}

TEST(SimilarityChecker, diffLengthLess2times) {
	SimilarityChecker machine("BAA");
	int expected = 20;
	int actual = machine.getLengthScore("AAABB");

	EXPECT_EQ(expected, actual);
}
