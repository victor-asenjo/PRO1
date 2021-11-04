#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> Columna;
typedef vector< vector<int> > Matriu;


Matriu producte (const Matriu& A, const Matriu& B){
    int n = A.size();
        Matriu Producte(n, Columna(n));
        for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                        int aux = 0;
                        for (int k = 0; k < n; ++k) {
                                aux = aux + A[i][k] * B[k][j];
                        }
                        Producte[i][j] = aux;
                }
        }
        return Producte;
}


int main (){
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matriu A(p,vector<int>(q));
        Matriu B(q,vector<int>(r));
        for (int i=0; i<p; ++i) {
            for (int j=0; j<q; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<q; ++i) {
            for (int j=0; j<r; ++j) {
                cin >> B[i][j];
        }   }
        Matriu C = producte(A,B);
        for (int i=0; i<p; ++i) {
            for (int j=0; j<r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
