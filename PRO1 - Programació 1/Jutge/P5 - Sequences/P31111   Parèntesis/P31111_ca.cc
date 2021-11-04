#include <iostream>
using namespace std;

int main(){
    char c;
    int obert = 0, tancat = 0;
    bool obrir_i_tancar = true;
    
    while (cin >> c) {
        if (c == '(') ++obert;
        else ++tancat;
        
        if (obert < tancat) obrir_i_tancar = false;
    }
    
    if (obert == tancat and obrir_i_tancar) cout << "si" << endl;
    else cout  << "no" << endl;
}
