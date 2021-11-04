// (c) FIBerHub, https://fiberhub.tk

#include <iostream>
using namespace std;

void lettercout(char letter, int lA, int lB, int lC) {
	if (letter == 'A') cout << lA;
	else if (letter == 'B') cout << lB;
	else cout << lC;
}

int main() {
	int x, y, z;
	char l1, l2, l3;

	cin >> x >> y >> z >> l1 >> l2 >> l3;

	int A = 0, B = 0, C = 0;

	if (x > y and x > z) {
		C = x;
		if (y > z) {
			B = y;
			A = z;
		} else {
			A = y;
			B = z;
		}
	}

	if (y > x and y > z) {
		C = y;
		if (x > z) {
			B = x;
			A = z;
		} else {
			A = x;
			B = z;
		}
	}

	if (z > y and z > x) {
		C = z;
		if (x > y) {
			B = x;
			A = y;
		} else {
			A = x;
			B = y;
		}
	}

	lettercout(l1, A, B, C);
	cout << ' ';
	lettercout(l2, A, B, C);
	cout << ' ';
	lettercout(l3, A, B, C);
	cout << endl;
}
