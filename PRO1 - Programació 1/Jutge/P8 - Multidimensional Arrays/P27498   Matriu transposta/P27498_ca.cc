#include <iostream>
#include <vector>
using namespace std;
 
typedef vector< vector<int> > Matriu;
 
void transposa(Matriu& m) {
        int n=m.size();
        Matriu x=m;
        for (int i=0; i<n; ++i) {
                for (int j=0; j<n; ++j) {
                        m[i][j]=x[j][i];
                }
        }
}
