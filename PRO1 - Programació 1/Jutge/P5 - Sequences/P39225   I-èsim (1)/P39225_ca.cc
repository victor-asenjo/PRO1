#include <iostream>
using namespace std;

int main(){
    int posicio, numeros;
    
    cin >> posicio;
    
    int numero_buscat = 0, x = posicio;
    while (cin >> numeros and numeros != -1){
        --x;
        if (x == 0) numero_buscat = numeros;
    }
    
    cout << "A la posicio " << posicio << " hi ha un " << numero_buscat << "." << endl;
}
