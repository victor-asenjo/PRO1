#include <iostream>
using namespace std;
 
bool primo(int n, int d){
    if (d*d <= n){
        if (n%d != 0) return primo(n, d+1);
        return false;
    }
    return true;
}
 
int seguent_primo(int n){
    while (not primo(n, 2)){
        ++n;
    }
    return n;
}
 
int main(){
    int n;
    while(cin >> n and n!=1 and n!= 0 and primo(n, 2)) cout << seguent_primo(n+1) << endl;
}
