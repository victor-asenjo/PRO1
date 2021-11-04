// (c) FIBerHub, https://fiberhub.tk

#include <iostream>
using namespace std;

int main() {
	int num;

	while (cin >> num) {
		if (num < 10) cout << "El producte dels digits de " << num << " es " << num << '.' << endl;
		else {
			while (num >= 10) {
				int r = 1, x = num;
				while (x > 0) {
					r *= x % 10;
					x /= 10;
				}

				cout << "El producte dels digits de " << num << " es " << r << '.' << endl;
				num = x = r;
			}
		}

		cout << "----------" << endl;
	}
}