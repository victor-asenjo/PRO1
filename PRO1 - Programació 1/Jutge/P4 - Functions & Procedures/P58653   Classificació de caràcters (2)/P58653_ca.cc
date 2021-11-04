#include <iostream>
using namespace std;


void escriu_linia(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "cert" << endl;
         else cout << "fals" << endl;
     }
     
int main (void) {
    char c;
    while (cin >> c){
        string s;
        int b;
        
        s = "lletra";
        if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')){
            b = 1;
        }
        else b = 0;
        escriu_linia(c, s, b);
        
        s = "vocal";
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U') {
            b = 1;
        }
        else b = 0;
        escriu_linia(c, s, b);
        
        s = "consonant";
        if (((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) and (c != 'a' and c != 'e' and c != 'i' and c != 'o' and c != 'u' and c != 'A' and c != 'E' and c != 'I' and c != 'O' and c != 'U')){
            b = 1;
        }
        else b = 0;
        escriu_linia(c, s, b);
        
        s = "majuscula";
        if (c >= 'A' and c <= 'Z') {
            b = 1;
        }
        else b = 0;
        escriu_linia(c, s, b);
        
        s = "minuscula";
        if (c >= 'a' and c <= 'z') {
            b = 1;
        }
        else b = 0;
        escriu_linia(c, s, b);
        
        s = "digit";
        if (c >= '0' and c <= '9') {
            b = 1;
        }
        else b = 0;
        escriu_linia(c, s, b);
    }
}
