#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	for (int j = 0; j < prices.size(); j++) {
		int num = 0;
		for (int i = j + 1; i < prices.size(); i++) {
			if (prices[i] >= prices[j]) {
				num++;
			}
			else { num++; break; }
		}
		answer.push_back(num);
	}

	return answer;
}