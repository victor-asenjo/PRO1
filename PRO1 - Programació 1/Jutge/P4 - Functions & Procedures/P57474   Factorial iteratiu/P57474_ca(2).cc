#include <iostream>
using namespace std;


int factorial (int n){
    if(n > 1) return n*factorial(n-1);
    return 1;
}


int main () {
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
}   }
