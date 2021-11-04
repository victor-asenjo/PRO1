#include <iostream>
using namespace std;

int main() {
	char r;
	cin >> r;

	if (r >= 'A' and r <= 'Z') r += ('a'-'A');
	else if (r >= 'a' and r <= 'z') r -= ('a'-'A');

	cout << r << endl;
}
