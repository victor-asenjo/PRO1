#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v){
    double p = 0;
    
    for (int i = 0; i < u.size(); ++i){
        p = p + v[i]*u[i];
    }
    
    return p;
}

int main (){
    vector <double> u(2), v(2);
    
    cin >> u[0] >> u[1] >> v[0] >> v[1];
    
    cout << producte_escalar (u, v) << endl;
}
