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
        if (contador >= caracter_linea){
            contador = 0;
        }
        morse (vocal, contador);
        
        if (contador >= caracter_linea){
            cout << endl;
        }
    }
    if (contador < caracter_linea and contador != 0)cout << endl;
    cout << "STOP" << endl;
}
