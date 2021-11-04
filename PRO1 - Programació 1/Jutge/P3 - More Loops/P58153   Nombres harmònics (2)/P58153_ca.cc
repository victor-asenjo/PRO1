#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(10);
    double a, b;
    while (cin >> a >> b){
        double d=0;
        while (b != a) {
            d= d + 1/(b + 1);
            ++b;
        }
    cout << d << endl;
    }
}
