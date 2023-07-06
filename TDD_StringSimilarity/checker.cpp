#include <string>

using namespace std;

class SimilarityChecker {
public:
	explicit SimilarityChecker(const string& str)
		: answer(str) {
	}

	int getAlphaScore(const string& str) {
		int totalCnt = 0;
		int sameCnt = 0;
		int alphaCntInput[26] = {0};
		int alphaCntAnswer[26] = { 0 };

		for (int i = 0; i < str.length(); i++) {
			alphaCntInput[str[i] - 'A']++;
		}
		for (int j = 0; j < answer.length(); j++) {
			alphaCntAnswer[answer[j] - 'A']++;
		}

		for (int i = 0; i < 26; ++i){
			if (alphaCntInput[i] && alphaCntAnswer[i]) sameCnt++;
			else if (alphaCntInput[i] || alphaCntAnswer[i]) totalCnt++;
		}
		totalCnt += sameCnt;

		return sameCnt*40/totalCnt;
	}
private:
	string answer;
};