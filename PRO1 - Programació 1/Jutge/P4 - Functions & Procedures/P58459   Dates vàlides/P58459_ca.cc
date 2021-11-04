#include <iostream>
using namespace std;


bool es_data_valida(int d, int m, int a){
    bool trasp;
    
    if ((a % 4 == 0 and a % 100 != 0) or (a % 100 == 0 and (a / 100 % 4) == 0)) trasp = 1;
    else trasp = 0;
    
    if ((m > 0 and m < 8) and (((m % 2 != 0) and (d > 0 and d < 32)) or ((m % 2 == 0 and m != 2) and (d > 0 and d < 31)))) return 1;
    if ((m > 7 and m < 13) and (((m % 2 == 0) and (d > 0 and d < 32)) or ((m % 2 != 0) and (d > 0 and d < 31)))) return 1;
    if ((m == 2) and ((trasp and (d > 0 and d < 30)) or ((not trasp) and (d > 0 and d < 29)))) return 1;
    else return 0;
}

int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (es_data_valida(d, m, a) ? "true" : "false") << endl;
}