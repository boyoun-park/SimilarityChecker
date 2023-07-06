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

		if (gap > minSize) return 0;
		return (minSize - gap) * MAX_LEGNTH_SCORE / minSize;
	}
private:
	string answer;
	const int MAX_LEGNTH_SCORE = 60;
};