// (c) FIBerHub, https://fiberhub.tk

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, tot = 0;
	cin >> a >> b;
	for (int f = 0; f < a; f++) {
		for (int c = 0; c < b; c++) {
			char x;
			cin >> x;

			if ((f % 2 == 0 and c % 2 == 0) or (f % 2 != 0 and  c % 2 != 0)) tot = tot+(x-'0');
		}
	}

	cout << tot << endl;
}

