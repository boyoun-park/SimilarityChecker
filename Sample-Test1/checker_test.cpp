#include "pch.h"
#include "../TDD_StringSimilarity/checker.cpp"

TEST(SimilarityChecker, sameAlphabetAll) {
	SimilarityChecker machine;
	int expected = 40;
	int actual = machine.getAlphaScore("DSA");
	EXPECT_EQ(expected, actual);
}