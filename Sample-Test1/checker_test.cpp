#include "pch.h"
#include "../TDD_StringSimilarity/checker.cpp"

TEST(SimilarityChecker, sameAlphabetAll) {
	SimilarityChecker machine("DSA");
	int expected = 40;
	int actual = machine.getAlphaScore("ASD");
	EXPECT_EQ(expected, actual);
}

TEST(SimilarityChecker, sameAlphabetPartial) {
	SimilarityChecker machine("AAE");
	int expected = 20;
	int actual = machine.getAlphaScore("AA");
	EXPECT_EQ(expected, actual);
}