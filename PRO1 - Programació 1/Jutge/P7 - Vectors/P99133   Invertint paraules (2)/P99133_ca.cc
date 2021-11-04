#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverse (const vector<string>& v){
    string s=v[v.size()-1];
    for (int i=0;i<s.size()/2;++i)swap (s [i],s[s.size() -1-i]);
    cout<<s<<endl;
}

int main (){
    int n;
    cin>>n;
    vector<string> v(n);
    for (int i=0; i<n; ++i) cin>>v[i];
    for (int i=n-1;i>=0;--i){
        reverse (v);
        v.pop_back ();
    }
}