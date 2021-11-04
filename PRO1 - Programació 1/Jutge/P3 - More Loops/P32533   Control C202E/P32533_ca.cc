#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int b=a; b!=0; --b){
        int c=1;
        while(c!=b){
            cout << "+";
            ++c;
        }
        cout << "/";
        int d=a;
        while (d!=b){
            cout << "*";
            --d;
        }
        cout << endl;
    }
}
