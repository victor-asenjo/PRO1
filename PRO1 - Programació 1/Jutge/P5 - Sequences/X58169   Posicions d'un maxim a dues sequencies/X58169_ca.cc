#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
	if (lpos > max) max = lpos;
}

int main() {
	int s1, c = 0, p1 = 0, max = 0;

	while (cin >> s1 and s1 != 0) {
		infoSequence(max, s1);
		++c;
		if (max == s1) p1 = c;
	}
	
	int s2, p2 = 1;
	while (cin >> s2 and s2 != max and s2 != 0) ++p2;

	cout << max << ' ' << p1 << ' ';
	if (s2 == max) cout << p2 << endl;
	else cout << '-' << endl;
}
