#include <iostream>
using namespace std;

int main() {
    int d, n, t;
    cin >> d >> n >> t;
    int b=0;
    for (int c=0; c!=t; ++c){
        int a;
        cin >> a;
        if ((n+a-d)>0) ++b;
        n=n+a-d;
    }
    cout << b << endl;
}
