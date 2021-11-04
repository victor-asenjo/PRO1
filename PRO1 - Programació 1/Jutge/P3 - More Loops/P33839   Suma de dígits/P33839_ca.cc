#include <iostream>
using namespace std;

int main(){
    int a;
    while (cin >> a) {
        int b=a, c=0;
        while (b != 0) {
            c=c+b%10;
            b=b/10;
        }
    cout << "La suma dels digits de " << a << " es " << c << "." << endl;
    }
}
