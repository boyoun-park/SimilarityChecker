#include <string>

using namespace std;

class SimilarityChecker {
public:
	explicit SimilarityChecker(const string& str)
		:answer(str) {
	}
	int getLengthScore(const string& str) {
		return 60;
	}
private:
	string answer;
};