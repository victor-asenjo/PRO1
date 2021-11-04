#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	cout << a * 365 * 24 * 3600+b * 24 * 3600+c * 3600+d * 60+e << endl;
}
