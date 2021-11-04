#include <iostream>
#include <vector>
using namespace std;

bool quadrat_magic(const vector< vector<int> >& t){
    int n = t.size();
    
    //calculem la suma de la diagonal
    int suma = 0;
    for (int i = 0; i < n; ++i) suma += t[i][i];
    
    //mirem si la suma de la 2a diagonal es = suma;
    int s = 0;
    for (int i = 0; i < n; ++i) s += t[n-i-1][i];
    if (s != suma) return false;
    
    //mirem si la suma de totes les files es = suma
    for (int j = 0; j < n; ++j){
        s = 0;
        for (int i = 0; i < n; ++i) s += t[i][j];
        if (s != suma) return false;
    }
    
    //mirem si tots els numeros entre 1 i n*n apareixen (1 cop!!)
    vector<bool> aparegut(n*n+1, false);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            int x = t[i][j];
            if (x < 1 or x > n*n) return false; //valor ilegal
            
            if (aparegut[x]) return false;  //x es repeticio
            else aparegut[x] = true;        //x es nou
        }
    }
    
    //passa totes les condicions
    return true;
}

int main(){
    
}
