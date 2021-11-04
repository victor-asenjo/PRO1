#include <iostream>
#include <vector>
using namespace std;
   
   
int index(const vector<string>& v, const string& s, int left, int right){
    //si esquerra es major que dreta estem fora del vector per tant no hem trobat s
    if(left > right) return -1;
    int mig = (left+right)/2;
    //si la longitud de s es menor que la paraula que ocupa el mig, s estara entre origen i el mig-1
    if (s.length() < v[mig].length()) return index(v, s, left, mig-1);
    //si la longitud de s es menor que la paraula que ocupa el mig, s estara entre el mig+1 i el final
    if (s.length() > v[mig].length()) return index(v, s, mig+1, right);
    //si no la longitud es igual
    //si es igual la paraula amb la pos mig ja la hem trobat
    else if (s == v[mig]) return mig;
    //si no queda comparar per ordre lexicografic
    else if (s < v[mig]) return index(v, s, left, mig-1);
    else if (s > v[mig]) return index(v, s, mig+1, right);
    return -1;
}
   
//pre:  v is ordered according to string length first and then 
//      by usual string order. All strings are different.   
//post: returns the position of s in v. 
//      If s  is not in v, returns -1 
int effi_search(const vector<string>& v, const string& s) {
    int size = v.size()-1;
    return index(v, s, 0, size);
}
   
   
int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s;
    while (cin >> s) cout << effi_search(v, s) << endl;
}