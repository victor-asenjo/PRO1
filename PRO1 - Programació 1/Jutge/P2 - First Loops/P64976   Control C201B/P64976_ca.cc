#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1;
    while (a!=n+1) {
        cout << n << " x " << a << " = " << n*a << endl;
        a = a+1;
    }
}
