#include <iostream>
using namespace std;

int main() {
    char s;
    int a = 0, b = 0;
    while (cin >> s){
        if (s == 'e') ++a;
        else if (s == 'o') --a;
        else if (s == 's') ++b;
        else --b;
    }
    cout << "(" << a << ", " << b << ")" << endl;
}
