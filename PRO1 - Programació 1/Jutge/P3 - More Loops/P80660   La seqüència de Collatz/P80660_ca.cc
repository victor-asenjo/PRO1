#include <iostream>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        int b = 0;
        while (a != 1){
            if (a%2 == 0) a = a / 2;
            else (a = a * 3 + 1);
            b = b+ 1;
        }
        cout << b << endl;
    }
}
