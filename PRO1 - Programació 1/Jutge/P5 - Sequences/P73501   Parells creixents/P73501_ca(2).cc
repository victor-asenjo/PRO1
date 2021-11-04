#include <iostream>
using namespace std;


int main (){
    int n, curr, last, counter;
        
    cin >> n;
    
    for (int i =0; i < n; ++i){
        counter = 0;
        
        cin >> curr;
        
        while (curr != 0){
            last = curr;
            cin >> curr;
            if (curr > last) ++counter;
        }
        cout << counter << endl;
    }
}
