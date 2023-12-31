#include "pch.h"
#include "../TDD_StringSimilarity/checker.cpp"

TEST(SimilarityChecker, sameAlphabetAll) {
	SimilarityChecker machine("DSA");
	int expected = 40;
	int actual = machine.getAlphaScore("ASD");
	EXPECT_EQ(expected, actual);
}

TEST(SimilarityChecker, diffAlphabetAll) {
	SimilarityChecker machine("BB");
	int expected = 0;
	int actual = machine.getAlphaScore("A");
	EXPECT_EQ(expected, actual);
}

TEST(SimilarityChecker, sameAlphabetPartial) {
	SimilarityChecker machine("AAE");
	int expected = 20;
	int actual = machine.getAlphaScore("AA");
	EXPECT_EQ(expected, actual);
}

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
