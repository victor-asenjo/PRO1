#include <iostream>
using namespace std;

int main(){
    int posicio, numeros;
    
    cin >> posicio;
    
    int numero_buscat = 0, x = posicio, introduits = 0;
    while (cin >> numeros){
        --x;
        ++introduits;
        if (x == 0) numero_buscat = numeros;
    }
    
    if (posicio <= introduits and posicio != 0 and posicio > 0) cout << "A la posicio " << posicio << " hi ha un " << numero_buscat << "." << endl;
    else cout << "Posicio incorrecta." << endl;
}