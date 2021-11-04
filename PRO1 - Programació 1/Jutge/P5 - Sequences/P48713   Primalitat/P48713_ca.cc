#include <iostream>
using namespace std;

 
int main (){
    int N;
    
    cin >> N;
    
    for (int i = 0; i<N; ++i){
        int num;
        
        cin >> num;
        
        int divisor = 2;
        bool is_prime = (num != 1);
    
        while (is_prime and divisor*divisor <= num){
            is_prime = (num % divisor != 0);
            divisor = divisor + 1;
        }
        
        if (is_prime and num != 0) cout << num << " es primer"<< endl;
        else cout << num << " no es primer" <<endl;
    }
}


