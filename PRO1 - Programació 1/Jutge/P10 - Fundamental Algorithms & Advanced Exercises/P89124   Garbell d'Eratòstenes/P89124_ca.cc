#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;    //valor maxim possible dels numeros

//PRE: i >= 2, garbell[i] = true
//POST: marca a false tots els garbell[k] tals que k es multiple de i
void marcar_multiples(int i, vector<bool>& garbell){
    for (int j = 2*i; j < int (garbell.size()); j+= i){
        garbell[j] = false;
    }
}

//PRE: n >= 0
//POST: retorna un garbell d'Eratostenes de mida n on, per a tot i,
//      garbell[i] = true <=> i es primer
vector <bool> precalcula_garbell(int n){
    vector <bool> garbell(n, true); //inicialitzacio
    
    //1r pas
    if (n > 0) garbell[0] = false;  //0 no es primer
    if (n > 1) garbell[1] = false;  //1 no es primer
    
    //2n pas
    //recorregut marcant els multiples dels primers que trobem
    for (int i = 2; i*i <= n; ++i){
        if (garbell[i]) marcar_multiples(i, garbell);
    }
    
    return garbell;
}

int main (){
    //precalcula el garbell [0...10⁶]
    vector <bool> primer = precalcula_garbell(MAX + 1);
    
    int n;
    while (cin >> n){
        if (primer[n]) cout << n << " es primer" << endl;
        else cout << n << " no es primer" << endl;
    }
}
