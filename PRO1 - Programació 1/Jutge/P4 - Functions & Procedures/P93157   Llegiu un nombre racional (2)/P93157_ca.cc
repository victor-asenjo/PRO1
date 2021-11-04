#include <iostream>
using namespace std;

int mcd(int a, int b){
    
    while (b != 0){
       int c;
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}
        

bool read_rational(int& num, int& den){
    char barra;
    
    if (cin >> num >> barra >> den){
        int divisor = mcd(num, den);
        num = num/divisor;
        den = den/divisor;  
        return true;
    }
    
    else return false;
}

int main() {
  int num, den;
  while (read_rational(num, den)) cout << num << ' ' << den << endl;
}
