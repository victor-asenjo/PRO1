#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    double NUMERO;
    
    while (cin >> NUMERO) {
        NUMERO = NUMERO * M_PI/180;
        
        double sinus, cosinus;
        
        sinus = sin (NUMERO);
        cosinus = cos (NUMERO);
        
        cout << sinus << " " << cosinus << endl;
    }
}
