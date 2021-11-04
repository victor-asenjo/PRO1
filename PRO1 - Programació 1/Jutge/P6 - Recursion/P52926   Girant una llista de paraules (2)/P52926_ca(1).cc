#include <iostream>
using namespace std;

void reverse(){
    string w;
    if (cin>>w and w!="fi"){
        reverse();
        cout << w << endl;
    }
}

int main (){
    reverse();
}
