void descompon(int n, int& h, int& m, int& s) {
    s = n%60;
    n = n/60;
    h = n/60;
    m = n%60;
}