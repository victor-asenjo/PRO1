#include <iostream>
using namespace std;

int nombre_digits(int n){
    n = n/10;
    int c = 0;
    if (n != 0) c = nombre_digits (n);
    return ++c;
}

int main(){
    int n;
    cin >> n;
    cout << nombre_digits(n) << endl;

}
