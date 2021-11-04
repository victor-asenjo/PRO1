// (c) FIBerHub, https://fiberhub.tk

#include <iostream>
using namespace std;

int main() {
	char x;
	cin >> x;
	string r;
	if (x >= '0' and x <= '9') r = "digit";
	else if ((x >= 'A' and x <= 'Z') or (x >= 'a' and x <= 'z')) r = "lletra";
	else r = "res";
	cout << r << endl;
}