#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Words {
	string word;
	int num;
};

bool cmp(const Words& a, const Words& b) {
	if(a.num == b.num) return a.word < b.word;
	else return a.num > b.num;
}

int main() {
	int n, k;

	while (cin >> n >> k) {
		Words last;
		vector<string> words(n);
		vector<Words> orderedWords;

		for (int i = 0; i < n; ++i) cin >> words[i];
		sort(words.begin(), words.end());

		last.word = words[0];
		last.num = 1;
		//cout << "Doing " << words[0] << "..." << endl;

		for (int i = 1; i < n; ++i) {
			if (last.word != words[i]) {
				//cout << "End! Done with " << last.word << ": " << last.num << endl;
				orderedWords.push_back(last);
				//cout << "Doing " << words[i] << "..." << endl;
				last.word = words[i];
				last.num = 1;
			} else {
				++last.num;
				//cout << "Freq of " << last.word << " has augmented to " << last.num << "!" << endl;
			}
		}

		orderedWords.push_back(last);

		sort(orderedWords.begin(), orderedWords.end(), cmp);

		int c = 0;
		while (k != 0) {
			cout << orderedWords[c].word << endl;
			k--;
			c++;
		}
		cout << "----------" << endl;
	}

	
}