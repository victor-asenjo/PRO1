#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
    int n;
    double c=0, d=1, h=0;
    cin>>n;
    while (d!=n+1) {
        c=1/d;
        h=h+c;
        d=d+1;
    }
    cout << h << endl;
}