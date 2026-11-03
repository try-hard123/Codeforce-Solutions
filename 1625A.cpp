#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  ios::sync_with_stdio (false);
  cin.tie (nullptr);
  int t;
  cin >> t;
  while (t--)
    {
      int n, l;
      cin >> n >> l;
      vector<vector<int>> cntbits (l, vector<int> (2, 0));
      for (int i = 0; i < n; i++)
        {
          int x;
          cin >> x;
          for (int j = 0; j < l; j++)
            {
              int bits = (x >> j) & 1;
              cntbits[j][bits] += 1;
            }
        }
      int y = 0;
      for (int i = 0; i < l; i++)
        {
          if (cntbits[i][0] < cntbits[i][1])
            y = y + (1 << i);
        }
      cout << y << "\n";
    }
  return 0;
}