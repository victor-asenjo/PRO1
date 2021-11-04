#include <iostream>
using namespace std;

 
int time_lapse (int time_1, int time_2){
    //si el primer temps es major al segon, entre el primer i el segon ha passat minim un minut
    if (time_1 > time_2)
    return ((time_2 + 60) - time_1);
  
    //si son iguals els temps, ha pasat un minut; 60 segons
    else if (time_1 == time_2) return 60;
    return (time_2 - time_1);
}

int main (){
    int n, time_1, time_2, t = 0, t_anterior = 0;
    cin >> n;
    bool first = true, first_comp = true;
    bool es_metr = true;
    while (n != -1)
    {
        //si es el primer loop, nomes llegeixo time_1 doncs encara no hi ha time_2: es el primer loop
        if (first)
        {
            time_1 = n;
            first = false;
        }
	//a partir del segon loop puc definir el time_2
	else
	{
	    time_2 = n;
	    t = time_lapse (time_1, time_2);
	    //a la primera comparaciC de time_1 amb time_2 no tenim antecedent amb qui comparar, per tant em salto la primera comparaciC de t_lapse
	    if (not first_comp)
	    {
	        if (t != t_anterior) es_metr = false;
	    }
	    time_1 = n;
	    first_comp = false;
	    
	}
	//guardo el t_lapse obtingut per comparar amb la seguent iteracio
	if (not first_comp)
	t_anterior = t;
	cin >> n;
    }
    if (not es_metr)
    t = 0;
    cout << t << endl;
}