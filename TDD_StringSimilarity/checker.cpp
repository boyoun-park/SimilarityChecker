#include <string>

using namespace std;

class SimilarityChecker {
public:
	explicit SimilarityChecker(const string& str)
		: answer(str) {
	}

	int getTotalCnt(int alphaCntInput[26], int alphaCntAnswer[26])
	{
		int totalCnt = 0;
		for (int letter = 0; letter < 26; ++letter){
			if (alphaCntInput[letter] || alphaCntAnswer[letter]) totalCnt++;
		}
		return totalCnt;
	}

	int getSameCnt(int alphaCntInput[26], int alphaCntAnswer[26])
	{
		int sameCnt = 0;
		for (int letter = 0; letter < 26; ++letter){
			if (alphaCntInput[letter] && alphaCntAnswer[letter]) sameCnt++;
		}
		return sameCnt;
	}

	void countEachAlpha(const string& str, int alphaCnt[26])
	{
		for (char letter : str) {
			alphaCnt[letter - 'A']++;
		}
	}

	int getAlphaScore(const string& str) {
		int alphaCntInput[26] = { 0 };
		int alphaCntAnswer[26] = { 0 };

		countEachAlpha(str, alphaCntInput);
		countEachAlpha(answer, alphaCntAnswer);

		int totalCnt = getTotalCnt(alphaCntInput, alphaCntAnswer);
		int sameCnt = getSameCnt(alphaCntInput, alphaCntAnswer);

		return (sameCnt * 40)/totalCnt;
	}
private:
	string answer;
};