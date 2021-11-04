#include <iostream>
using namespace std;

int main() {
    int a;
    string b = "*";
    cin >> a;
    while (a > 0){
        cout << b << endl;
        a = a - 1;
        b = b + "*";
    }
}
