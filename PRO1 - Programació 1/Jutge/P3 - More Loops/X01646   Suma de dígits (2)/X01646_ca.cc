#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> b;
    while (cin >> a){
        int e=a, c=0;
        while (e != 0){
            c = c + e%b;
            e = e/b;
        }
        cout << a << ": " << c << endl;
    }
}
