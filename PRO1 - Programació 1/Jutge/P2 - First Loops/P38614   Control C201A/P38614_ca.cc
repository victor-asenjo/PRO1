#include <iostream>
using namespace std;

int main() {
	int n, num, r = 0;
	cin >> n;
	num = n;
	while (n != 0) {
		r =r+ n % 10;
		n=n/100;
	}
	string a;
	if ((r % 2) == 0) a = "";
	else a = " NO";
	cout << num << a << " ES TXATXI" << endl;
}
