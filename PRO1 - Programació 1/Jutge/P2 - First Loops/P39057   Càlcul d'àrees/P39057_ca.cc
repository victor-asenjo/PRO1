#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
	cout.precision(6);
    int n;
    cin >> n;
    int c = 0;
    while (c!=n) {
        string f;
        double a, b;
        while (cin >> f) {
            if (f == "rectangle") {
                cin >> a >> b;
                cout << a*b << endl;
            }
            else {
                cin >> a;
                cout << a * a * M_PI << endl;
            }
        }
        ++c;
    }
}
