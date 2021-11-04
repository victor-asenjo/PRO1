#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int NUMERO;
    while (cin >> NUMERO) {
        int quadrat;
        double arrel;
        
        quadrat = NUMERO*NUMERO;
        arrel = sqrt (NUMERO);
        
        cout << quadrat << " " << arrel << endl;
    }
}
