int sum_min_max(int x,int y,int z) {
    int max, min;
    
    if (x < y) {
        min = x; 
        max = y;
    }
    else {
        min = y;
        max = x;
    }
    
    if (z < min) min = z;
    else if (z > max) max = z;
    
    int s;
    s = max + min;
    return s;
}