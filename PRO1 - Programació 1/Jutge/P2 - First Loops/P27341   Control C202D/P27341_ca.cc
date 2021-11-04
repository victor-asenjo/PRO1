#include <iostream>
using namespace std;

int main (){
    int a,b;
    while (cin >> a >> b) {
        if (a > b) cout << "suma dels cubs entre " << a << " i " << b << ": 0" << endl;
        else if (a == b) cout << "suma dels cubs entre " << a << " i " << b << ": " << a*a*a << endl;
        else {
            int c = 0, d = a;
            while (d!=b+1) {
            c = c + d*d*d;
            d = d + 1;
            }
            cout << "suma dels cubs entre " << a << " i " << b << ": " << c << endl;
        }
    }
}
