#include <iostream>
using namespace std;

void base2(int n) {
	int j;
	j = n/2;
	if (j != 0) base2(j);
	cout << n - 2 * j;
}

void base8(int n) {
	int j;
	j = n/8;
	if (j != 0) base8(j);
	cout << n - 8 *j;
}

void base16(int n) {
	int j;
	char q;
	j = n/16;
	if (j != 0) base16(j);
	if ((n - 16 * j) >= 10){
		q = 'A' + (n%16) - 10;
		cout << q;
	}
	else cout << n - 16  * j;
}

int main() {
	int a;

	while (cin >> a) {
		cout << a << " = ";
		base2(a);
		cout << ", ";
		base8(a);
		cout << ", ";
		base16(a);
		cout << endl;
	}
}