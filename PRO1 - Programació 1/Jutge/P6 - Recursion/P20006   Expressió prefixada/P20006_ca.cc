#include <iostream>
using namespace std;

int solucio(){
    char c;
    cin >> c;
    
    if (c >= '0' and c <= '9') return int (c) - int ('0');
    
    if (c == '+') return solucio()+solucio();
    if (c == '-') return solucio()-solucio();
    return solucio()*solucio();
}

int main() {
    cout << solucio() << endl;
}
    
