#include <iostream>
using namespace std;

int main (){
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int num_series;
        
        cin >> num_series;
        
        for (int i = 0; i < num_series; ++i){
            int valors_serie;
            
            cin >> valors_serie;
            
            double max, min, mitjana;
            
            cin >> min;
            mitjana = min;
            max = min;
            
            for (int j = 1; j < valors_serie; ++j){
                double valors;
                
                cin >> valors;
                                
                if (valors > max) max = valors;
                if (valors < min) min = valors;
                mitjana = mitjana + valors;
            }
            cout << min << " " << max << " " << mitjana/valors_serie << endl;
        }
}
