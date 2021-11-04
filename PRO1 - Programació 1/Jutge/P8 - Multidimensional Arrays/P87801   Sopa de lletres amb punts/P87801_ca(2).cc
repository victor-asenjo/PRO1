#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector<char> FilaLletres;
typedef vector<FilaLletres> MatriuLletres;

typedef vector<int> FilaPunts;
typedef vector<FilaPunts> MatriuPunts;


MatriuLletres llegirLletres(int f, int c)
{
    MatriuLletres m(f, FilaLletres(c));

    for (int y = 0; y < f; ++y)
    {
        for (int x = 0; x < c; ++x)
        {
            cin >> m[y][x];
        }
    }
    return m;
}

MatriuPunts llegirPunts(int f, int c)
{
    MatriuPunts m(f, FilaPunts(c));

    for (int y = 0; y < f; ++y)
    {
        for (int x = 0; x < c; ++x)
        {
            cin >> m[y][x];
        }
    }
    return m;
}

// Transfoma la matriu de lletres en una seqüència:
// Primer les lletres en horizontal,
// Després en vertical,
// Amb un separador de final de fila o final de columnna: '#'
string sequenciaLLetres(MatriuLletres & m, int f, int c)
{
    string s;

    for (int y = 0; y < f; ++y)
    {
        for (int x = 0; x < c; ++x)
        {
            s.push_back(m[y][x]);
        }
        s.push_back('#');
    }

    for (int x = 0; x < c; ++x)
    {
        for (int y = 0; y < f; ++y)
        {
            s.push_back(m[y][x]);
        }
        s.push_back('#');
    }

    return s;
}

// Transfoma la matriu de punts en una seqüència:
// Primer els punts en horizontal,
// Després en vertical,
// Amb un separador de final de fila o final de columnna: 0
FilaPunts sequenciaPunts(MatriuPunts & m, int f, int c)
{
    FilaPunts s;

    for (int y = 0; y < f; ++y)
    {
        for (int x = 0; x < c; ++x)
        {
            s.push_back(m[y][x]);
        }
        s.push_back(0);
    }

    for (int x = 0; x < c; ++x)
    {
        for (int y = 0; y < f; ++y)
        {
            s.push_back(m[y][x]);
        }
        s.push_back(0);
    }

    return s;
}

// Retorna la posició d'una subcadena dins una cadena.
// Si no hi és, retorna -1.
int cercar(string & subcadena, string & cadena, int posicioInicial)
{
    int sc_size = subcadena.size();
    int posicioFinal = cadena.size() - sc_size + 1;

    for (int posicio = posicioInicial; posicio < posicioFinal; ++posicio)
    {
        bool iguals = true;
        for (int i = 0; i < sc_size; ++i)
        {
            if (cadena[posicio + i] != subcadena[i])
            {
                iguals = false;
            }
        }

        if (iguals)
        {
            return posicio;
        }
    }

    return -1;
}


// Ara la cerca es en una sola sequëncia:
int obtenirPunts(string & paraula, string & seq_lletres, FilaPunts & seq_punts)
{
    int puntsTotals = -1;

    int trobat = cercar(paraula, seq_lletres, 0);
    while (trobat >= 0)
    {
        int posicio = (int) trobat;
        int punts = 0;
        for (int i = 0; i < paraula.size(); ++i)
        {
            punts += seq_punts[posicio + i];
        }

        if (punts > puntsTotals)
        {
            puntsTotals = punts;
        }

        trobat = cercar(paraula, seq_lletres, trobat + 1);
    }

    return puntsTotals;
}

int main()
{
    int f, c;
    while (cin >> f >> c)
    {
        MatriuLletres m_lletres = llegirLletres(f, c);
        MatriuPunts m_punts = llegirPunts(f, c);

        string seq_lletres = sequenciaLLetres(m_lletres, f, c);
        FilaPunts seq_punts = sequenciaPunts(m_punts, f, c);

        int t;
        cin >> t;
        for (int i = 0; i < t; ++i)
        {
            string paraula;
            cin >> paraula;

            int punts = obtenirPunts(paraula, seq_lletres, seq_punts);

            if (punts == -1)
            {
                cout << "no" << endl;
            }
            else
            {
                cout << punts << endl;
            }
        }
    }
    return 0;
}

