#include <iostream>
using namespace std;

int main() {
    long int a, b;
    while (cin >> a >> b) {
        if (b == 0) cout << 1 << endl;
        else {
            int c=1, d=a;
            while (c!=b) {
                a = a*d;
                c=c+1;
            }
        cout << a << endl;
        }
    }
}
