#include <iostream>
using namespace std;

void morse (char c, int& n){
    if (c == 'a'){
        cout << ".-";
        n = n + 2;
    }
    
    else if (c == 'e'){
        cout << ".";
        ++n;
    }
    
    else if (c == 'i'){
        cout << "..";
        n = n + 2;
    }
    
    else if (c == 'o'){
        cout << "---";
        n = n + 3;
    }
    
    else{
        cout << "..-";
        n = n + 3;
    }
}

int main(void){
    int caracter_linea;
    
    cin >> caracter_linea;
    
    char vocal;
    int contador = 0;
    
    while (cin >> vocal){
        morse (vocal, contador);
        if (contador >= caracter_linea){
            cout << endl;
            contador = 0;
        }
    }
    if (contador > 0)cout << endl;
    cout << "STOP" << endl;
}
