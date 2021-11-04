#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre){
    //si element no hi es, els indexos s'acaben creuant
    if (dre < esq) return -1;
    
    //altrament, si tenim espai on cercar...
    int mig = (esq + dre) / 2;
    if (x < v[mig]) return posicio (x, v, esq, mig-1);
    else if (x > v[mig]) return posicio (x, v, mig+1, dre);
    
    else return mig;
}
