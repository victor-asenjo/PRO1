#include <iostream>
#include <vector>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;        // La nota esta entre 0 i 10, (-1=NP)
    bool repetidor;
};
     
const int NP = -1;

void informacio(const vector<Estudiant>& es,
                double& min, double& max, double& mitj){
    //Inicialitzacions de les notes min i max (valors impossibles)
    min = 11.;
    max = 0.;
    
    //Recorregut pels estudiants
    int n = es.size(); 
    double suma = 0;
    int quants = 0;
    for (int i = 0; i < n; ++i){
        //si s'ha presentat i no es repetidor
        if (es[i].nota != NP and not es[i].repetidor){
            if (es[i].nota < min) min = es[i].nota;
            if (es[i].nota > max) max = es[i].nota;
            suma += es[i].nota;
            ++quants;
        }
    }
    if (quants > 0) mitj = suma / quants;
    else max = min = mitj = -1;
}

vector <Estudiant> llegir(){
    vector<Estudiant> v;
    
    int a, d;
    string b;
    double c;
    while (cin >> a >> b >> c >> d){
        Estudiant e;
        e.dni = a;
        e.nom = b;
        e.nota = c;
        e.repetidor = (d == 1);
        v.push_back(e);
    }
    return v;
}

int main (){
    vector<Estudiant> v = llegir();
    
    double minNota, maxNota, mitjana;
    informacio(v, minNota, maxNota, mitjana);
    cout << "Mínima nota: " << minNota << endl;
    cout << "Maxima nota: " << maxNota << endl;
    cout << "Nota mitjana: " << mitjana << endl;
}
    
    
