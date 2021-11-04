#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	if (a == 0) cout <<a;
	while (a != 0) {
        b = a % 2;
        a = a / 2;
		cout << b;
	}
	cout << endl;
}
