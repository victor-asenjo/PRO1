#include <iostream>
using namespace std;

void swap(string x) {
	if (cin >> x and x != "fi") {
		swap(x);
		cout << x << endl;
	}
}

int main() {
	string x;
	swap(x);
}