bool es_perfecte(int x){
	int suma = 1;
	
	for(int i = 2; i*i <= x; ++i){
		if(x % i == 0) suma += i + x/i;
	}
	
	if(x != 0 and x != 1) return (suma == x);
	else return false;
}
