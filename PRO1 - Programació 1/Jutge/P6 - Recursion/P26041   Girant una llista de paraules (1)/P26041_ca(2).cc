#include <iostream>
using namespace std;

void invers (){
    string nom;
    if (cin >> nom){
        invers ();
        cout << nom << endl;
    }
}

int main(){
    invers();
}
