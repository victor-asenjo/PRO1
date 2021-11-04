#include <iostream>
using namespace std;


int main (){
    int x;
    
    cin >> x;
    
    int n, s = 0, c = 0;
    bool primer = true;
    
    while (cin >> n){
        if (n != 0){
            if (not primer and n > s) ++c;
            s = n;
            primer = false;
        }
        else{
            cout << c << endl;
            primer = true;
            c = 0;
        }
    }
}
