bool es_capicua(int n){
    if (n==0) return 1;
    
    int a = n, numcif = 0;
    
    while (a != 0){
        a = a/10;
        ++numcif;
    }
    
    int b = n, reves = 0;
    
    while (b > 0){
        int c = 1;
        for (int exponent = 0; exponent != numcif-1; ++exponent){
            c = c*10;
        }
        reves = reves + (b%10)*c;
        b = b/10;
        --numcif;
    }
    
    if (reves == n) return 1;
    else return 0;
}