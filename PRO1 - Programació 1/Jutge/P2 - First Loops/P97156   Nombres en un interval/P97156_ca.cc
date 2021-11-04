#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (b >= a) {
		while (a < b) {
			cout << a << ",";
			a=a+1;
		}

		cout << b;
		cout << endl;
	}

	if (b < a) cout << endl;
}
