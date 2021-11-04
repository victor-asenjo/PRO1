int max4(int a, int b, int c, int d){
    int max;
    
    if (a < b) max = b;
    else max = a;
    if (c > max) max = c;
    if (d > max) max = d;
    
    return max;
}