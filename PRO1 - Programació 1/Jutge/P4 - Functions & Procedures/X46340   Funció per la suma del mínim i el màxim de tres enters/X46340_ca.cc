#include <iostream>
using namespace std;


int sum_min_max(int x,int y,int z) {
    int max, min;
    
    if (x < y) {
        min = x; 
        max = y;
    }
    else {
        min = y;
        max = x;
    }
    
    if (z < min) min = z;
    else if (z > max) max = z;
    
    int s;
    s = max + min;
    return s;
}


int main() {
  int x,y,z;
  while (cin >> x >> y >> z) cout << sum_min_max(x,y,z) << endl;
}


