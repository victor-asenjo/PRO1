#include <iostream>
using namespace std;
 
char codificat(char c, int k){
    if(c >= 'a' and c <= 'z') return 'A' + (c - 'a' + k)%26;
    else if(c == '_') return ' ';
    else return c;
}

int main(){
    int n;
    while (cin >> n){
        char m;
        while(cin >> m and m != '.') cout << codificat(m, n);
        cout << endl;
    }
}