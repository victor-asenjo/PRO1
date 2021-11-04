#include <iostream>
using namespace std;

int main() {
	char x  = 'x';
	int c = 0;
	while (x != '.') {
		cin >> x;
		if (x == 'a') {
		    c= c+1;
		}
	}
	cout << c << endl;
}
