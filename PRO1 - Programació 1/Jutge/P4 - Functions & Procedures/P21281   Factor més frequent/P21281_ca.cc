void factor(int n, int& f, int& q) {
    int d = 2;
    int a = q;
    q = 0;
    while (d*d <= n) {
        a = 0;
        while (n%d==0) {
            ++a;
            n=n/d;
            if (a > q) {
                q = a;
                f = d;
            }
        }
        d++;
    }
    if (q == 0) {
        f = n;
        q = 1;
    }
}