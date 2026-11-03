#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int a, b;
      cin >> a >> b;
      if (a == b)
        {
          cout << a << endl;
          continue;
        }
      if (b > a + 1)
        {
          cout << -1 << endl;
          continue;
        }
      if (a > b)
        {
          if ((a - b) % 2 == 0)
            {
              cout << a << endl;
              continue;
            }
          else
            {
              cout << a + 1 << endl;
              continue;
            }
        }
      else if (a < b)
        {
          cout << b << endl;
        }
    }
}