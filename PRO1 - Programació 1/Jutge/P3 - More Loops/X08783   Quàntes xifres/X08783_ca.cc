#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> b >> a){
        int c=0;
        while (a != 0){
            a = a/b;
            ++c;
        }
        cout << c << endl;
    }
}
