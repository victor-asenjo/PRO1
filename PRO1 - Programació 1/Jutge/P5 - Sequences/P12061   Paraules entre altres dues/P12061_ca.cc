#include <iostream>
using namespace std;

int main(){
    string s;
    int c = 0;
    bool trobat = false, principi = false;
        
    while (cin >> s and not trobat) {
        trobat = s == "final";
        if (s == "principi") principi = true;
        else if (principi) ++c;       
    }
    
    if (principi and trobat) cout << c - 1  << endl;
    else cout << "sequencia incorrecta" << endl;
}
