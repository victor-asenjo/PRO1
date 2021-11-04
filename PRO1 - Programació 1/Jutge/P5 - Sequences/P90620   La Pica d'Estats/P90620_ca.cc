#include <iostream>
using namespace std;


int main(){
    int a, b,  c;
    
    cin >> a >> b >> c;
    
    bool pic = false;
    
    if (b > 3143 and b > a and b > c) pic = true;
    
    int d;
    while (cin >> d and d != 0){
        a = b;
        b = c;
        c = d;
        if (b > 3143 and b > a and b > c) pic = true;
    }
    
    if (pic) cout << "SI" << endl;
    else cout << "NO" << endl;
}
