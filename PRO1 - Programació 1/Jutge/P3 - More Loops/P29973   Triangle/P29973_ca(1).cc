#include <iostream>
using namespace std;

int main() {
    int a, b = 0, d=0;
    cin >> a;
    while (b!=a) {
        int c=0;
        d=d+1;
        while (c!=d) {
            cout << "*";
            c=c+1;
        }
        cout << endl;
        b=b+1;
    }
}
