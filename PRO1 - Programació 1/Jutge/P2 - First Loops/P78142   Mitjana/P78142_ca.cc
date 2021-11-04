#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	double a, b = 0, c = 0;
	while (cin >> a) {
		b=b+a;
		c=c+1;
	}
	cout << b / c << endl;
}
