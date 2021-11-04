#include <iostream>
using namespace std;

int suma_divisors(int a) {
	int z = a / 2, div = 0;
	while (z > 0) {
		if (a % z == 0) div += z;
		z--;
	}
	return div;
}

bool son_amics(int a, int b) {
	if (a != b and suma_divisors(a) == b and suma_divisors(b) == a) return true;
	else return false;
}

int main() {
	int x, y;
	bool first = true;

	while (cin >> x >> y) {
		if (son_amics(x, y)) {
			if (not first) cout << ',';
			cout << '(' << x << ' ' << y << ')';
			first = false;
		}
	}
	cout << endl;
}