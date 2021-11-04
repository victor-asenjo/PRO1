#include <iostream>
using namespace std;

int main(){
    int num_elements;
    
    while (cin >> num_elements) { 
        int primer;
        cin >> primer;
        int max = primer;
        
        for (int i=1; i < num_elements; ++i){
            int element;
            
            cin >> element;
            
            if (element > max) max = element;
        }
        cout << max << endl;
    }
}
