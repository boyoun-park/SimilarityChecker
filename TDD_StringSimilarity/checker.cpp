#include <string>
#include <algorithm>
using namespace std;

class SimilarityChecker {
public:
	explicit SimilarityChecker(const string& str)
		:answer(str) {
	}
	int getLengthScore(const string& str) {
		int gap = abs((int)answer.size() - (int)str.size());
		int minSize = min(answer.size(), str.size());
		int score = (minSize - gap) * 60 / minSize;
		return score;
	}
private:
	string answer;
};