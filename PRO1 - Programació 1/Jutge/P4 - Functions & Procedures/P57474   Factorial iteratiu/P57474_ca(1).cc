#include <iostream>
using namespace std;


int factorial (int n){
    if (n ==0 or n == 1) return 1;
    else {
        int fact = 1, cont = 1;
        while (fact != n){
            cont = cont*(fact + 1);
            ++fact;
        }
        return cont;
    }
}


int main () {
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
}   }
