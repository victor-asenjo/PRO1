// (c) FIBerHub, https://fiberhub.tk

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.precision(4);
	cout.setf(ios::fixed);

	double x;
	cin >> x;

	double n, r = 0, c = 0;
	while (cin >> n) {
		r += n * pow(x, c);
		++c;
	}

	cout << r << endl;
}