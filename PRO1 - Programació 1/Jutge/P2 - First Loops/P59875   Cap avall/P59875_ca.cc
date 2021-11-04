#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    if (x>y) {
        while (x>=y) {
           cout << x << endl;
           x = x-1;
        }
        
    }
    else {
        while (y>=x) {
            cout << y << endl;
            y = y-1;
        }
    }
}
