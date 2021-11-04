bool c_frac(int n1, int d1, int n2, int d2) {
    double a, b;
    a = n1/double (d1);
    b = n2/double (d2);
    if (a  < b) return 1;
    else return 0;
}