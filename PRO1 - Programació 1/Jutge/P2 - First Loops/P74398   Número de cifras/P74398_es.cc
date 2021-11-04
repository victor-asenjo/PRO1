#include <iostream>
using namespace std;

int main() {
	int a, b=2, d;
    cin >> a;
    while (b!=17) {
        d = a;
        int c=0;
        while (d!=0) {
                d = d/b;
                c = c+1;
        }
        cout << "Base " << b << ": " << c << " cifras." << endl;
        b = b + 1;
    }
}
