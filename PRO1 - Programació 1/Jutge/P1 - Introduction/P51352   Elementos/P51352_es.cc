#include <iostream>
using namespace std;

int main() {
	char a, b, c;
	cin >> a >> b;

	if ((a == 'A' and b == 'P') or (a == 'P' and b == 'V') or (a == 'V' and b == 'A')) c = '1';
	else if (a == b) c = '-';
	else c = '2';

	cout << c << endl;
}
