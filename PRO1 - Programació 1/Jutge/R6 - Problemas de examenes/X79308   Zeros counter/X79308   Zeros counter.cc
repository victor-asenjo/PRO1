#include <iostream>
#include <vector>
using namespace std;

typedef vector < int >Vector;

Vector llegeix_u (int n)
{
  Vector u (n);

  for (int i = 0; i < n; ++i)
    cin >> u[i];

  return u;
}

   //posa els zeros comptats per zeros a la posiciC corresponent de v
void zeros_counter (const Vector & u, Vector & v)
{
  int n = u.size (), acum = 0;
  for(int i = n-1; i >= 0; --i)
  {
      if(u[i] == 0)
      {
          ++acum;
          v[i] = acum;
      }
      else v[i] = acum;
  }
}

   //imprimeix v
void print (Vector v)
{
  int n = v.size ();

  for (int i = 0; i < n; ++i)
    cout << v[i] << endl;
}


int main ()
{
  int n;

  cin >> n;

  Vector u = llegeix_u (n);
  Vector v (n);

  zeros_counter (u, v);
  print (v);

}
