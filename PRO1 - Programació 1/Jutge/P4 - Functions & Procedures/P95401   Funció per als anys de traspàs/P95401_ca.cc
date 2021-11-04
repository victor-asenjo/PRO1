#include <iostream>
using namespace std;


bool es_any_de_traspas(int any){
    bool trasp = 0;
        if ((any % 4 == 0 and any % 100 != 0) or (any % 100 == 0 and (any / 100 % 4) == 0)) trasp = 1;
        else trasp = 0;
        
    return trasp;
}


int main() {
    int a;
    while (cin >> a) cout << (es_any_de_traspas(a) ? "true" : "false") << endl;
}
