// (c) FIBerHub, https://fiberhub.tk

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num, x, c = 0;
	cin >> num;

	x = num;
	while (x != 0) {
		x /= 10;
		++c;
	}

	string sign;
	int n1, n1s = 0, n2, n2s = 0, mult;
	if (c % 2 != 0 or num == 0) cout << "nothing" << endl;
	else {
		mult = pow(10, c / 2);
		n1 = num / mult;
		n2 = num % mult;

		while (n1 != 0) {
			n1s += n1 % 10;
			n1 /= 10;
		}

		while (n2 != 0) {
			n2s += n2 % 10;
			n2 /= 10;
		}

		if (n1s > n2s) sign = " > ";
		else if (n1s < n2s) sign = " < ";
		else sign = " = ";

		cout << n1s << sign << n2s << endl;
	}
}
