#include <iostream>
#include <string>

using namespace std;

#define RANG_MAXIM 2000000000

string unitats(int u)
{
    switch (u)
    {
        case 0:
            return "";
        case 1:
            return "un";
        case 2:
            return "dos";
        case 3:
            return "tres";
        case 4:
            return "quatre";
        case 5:
            return "cinc";
        case 6:
            return "sis";
        case 7:
            return "set";
        case 8:
            return "vuit";
        case 9:
            return "nou";
        default:
            return "ERROR_UNITATS";
    }
}

string teens(int u)
{
    switch (u)
    {
        case 0:
            return "deu";
        case 1:
            return "onze";
        case 2:
            return "dotze";
        case 3:
            return "tretze";
        case 4:
            return "catorze";
        case 5:
            return "quinze";
        case 6:
            return "setze";
        case 7:
            return "disset";
        case 8:
            return "divuit";
        case 9:
            return "dinou";
        default:
            return "ERROR_TEENS";
    }
}

string decenes(int d)
{
    switch (d)
    {
        case 2:
            return "vint";
        case 3:
            return "trenta";
        case 4:
            return "quaranta";
        case 5:
            return "cinquanta";
        case 6:
            return "seixanta";
        case 7:
            return "setanta";
        case 8:
            return "vuitanta";
        case 9:
            return "noranta";
        default:
            return "ERROR_DECENES";
    }
}

string dues_xifres(int du)
{
    int d = du / 10;
    int u = du % 10;

    if (d == 0)
    {
        return unitats(u);
    }
    else if (d == 1)
    {
        return teens(u);
    }
    else if (u == 0)
    {
        return decenes(d);
    }
    else if (d == 2)
    {
        return "vint-i-" + unitats(u);
    }
    else
    {
        return decenes(d) + "-" + unitats(u);
    }
}

string tres_xifres(int cdu)
{
    int c  = cdu / 100;
    int du = cdu % 100;

    string sep = (du == 0) ? "" : " ";

    if (c == 0)
    {
        return dues_xifres(du);
    }
    else if (c == 1)
    {
        return "cent" + sep + dues_xifres(du);
    }
    else
    {
        return unitats(c) + "-cents" + sep + dues_xifres(du);
    }
}

string sis_xifres(int kkkcdu)
{
    int kkk = kkkcdu / 1000;
    int cdu = kkkcdu % 1000;

    string sep = (cdu == 0) ? "" : " ";

    if (kkk == 0)
    {
        return tres_xifres(cdu);
    }
    else if (kkk == 1)
    {
        return "mil" + sep + tres_xifres(cdu);
    }
    else
    {
        return tres_xifres(kkk) + " mil" + sep + tres_xifres(cdu);
    }
}

string deu_xifres(int mmmmkkkcdu)
{
    int mmmm   = mmmmkkkcdu / 1000000;
    int kkkcdu = mmmmkkkcdu % 1000000;

    string sep = (kkkcdu == 0) ? "" : " ";

    if (mmmm == 0)
    {
        return sis_xifres(kkkcdu);
    }
    else if (mmmm == 1)
    {
        return "un milio" + sep + sis_xifres(kkkcdu);
    }
    else
    {
        return sis_xifres(mmmm) + " milions" + sep + sis_xifres(kkkcdu);
    }
}

string enter_a_lletres(int n)
{
    if (n == 0)
    {
        return "zero";
    }
    else if (n > 0 && n <= RANG_MAXIM)
    {
        return deu_xifres(n);
    }
    else
    {
        return "ERROR_RANG";
    }
}


int main()
{
    int n;

    while (cin >> n)
    {
        cout << n << ": " << enter_a_lletres(n) << "." << endl;
    }

    return 0;
}