#include <iostream>
using namespace std;

int main (){
    int num, pos = 1;
    
    while (cin >> num and num%2 != 0) {
        ++pos;
    }
    cout << pos << endl;
}
