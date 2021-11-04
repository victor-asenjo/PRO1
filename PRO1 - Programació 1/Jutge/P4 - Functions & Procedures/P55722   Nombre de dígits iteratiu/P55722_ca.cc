int nombre_digits(int n) {
    
    if (n==0) return 1;
    
    int a = 0;
    
    while (n != 0) {
		n=n/10;
		++a;
    }
    
    return a;
}
