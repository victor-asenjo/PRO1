#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	c = a;

	if (a == 0) b = 1;
	else b = 0;

	while (c != 0) {
		c=c/10;
		b=b+1;
	}
	cout << "El nombre de digits de " << a << " es " << b << '.' << endl;
}
