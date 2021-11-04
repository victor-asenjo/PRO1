#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	cout << "nombres que acaben igual que " << a << ":" << endl;
	c = 0;
	while (cin >> b) {
		if (a % 1000 == b % 1000) {
			cout << b << endl;
			c=c+1;
		}
	}
	cout << "total: " << c << endl;
}
