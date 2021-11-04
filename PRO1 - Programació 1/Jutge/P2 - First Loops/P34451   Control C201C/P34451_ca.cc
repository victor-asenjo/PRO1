#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0;
	cin >> a;
	while (cin >> b) {
		if ((b % a) == 0) c=c+1;
	}
	cout << c << endl;
}
