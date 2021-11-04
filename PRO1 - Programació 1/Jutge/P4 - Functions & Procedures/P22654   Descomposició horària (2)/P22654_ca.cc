#include <iostream>
using namespace std;


void descompon(int n, int& h, int& m, int& s) {
    s = n%60;
    n = n/60;
    h = n/60;
    m = n%60;
}


int main() {
    int n, h, m, s;
    while (cin >> n) {
        descompon(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}
