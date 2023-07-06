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
		int score = (1 - gap / min(answer.size(), str.size())) * 60;
		return score;
	}
private:
	string answer;
};