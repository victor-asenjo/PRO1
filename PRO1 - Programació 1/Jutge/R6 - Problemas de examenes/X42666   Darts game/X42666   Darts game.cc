#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Info {
    string name;
    int targets;
    int aproxs;
    int fails;
    int points;
};

typedef vector <Info> jugadors;

jugadors read(int n, int k){
    jugadors j(n);
    for (int i = 0; i < n; ++i){
        cin >> j[i].name >> j[i].targets >> j[i].aproxs;
        j[i].fails = k - j[i].targets - j[i].aproxs;
        j[i].points = 3*j[i].targets + j[i].aproxs;
    }
    return j;
}

bool compara(Info x, Info y){
    if (x.points == y.points){
        if (x.fails == y.fails) return x.name < y.name;
        return x.fails < y.fails;
    }
    return x.points > y.points;
}



int main() {
    int n, k;
    
    cin >> n >> k;
    
    jugadors j = read(n, k);
    
    sort(j.begin(), j.end(), compara);
    
    for (int i = 0; i < n; ++i){
        cout << j[i].name << " " << j[i].points << " " << j[i].fails << endl;
    }
}