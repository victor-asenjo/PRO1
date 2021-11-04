#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	if (a == 0) cout << a;
	while (a != 0) {
		b = a % 16;
		a /= 16;
		if (b >= 10) cout << char('A'+b-10);
		else cout << b;
	}
	cout << endl;
}
