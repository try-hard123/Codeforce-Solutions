#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  ios::sync_with_stdio (false);
  cin.tie (0);
  int t;
  cin >> t;
  while (t--)
    {
      long long a, b, c;
      cin >> a >> b >> c;
      long long ans = 0;
      (abs ((a + c) - b) >= abs (a - b)) ? ans = abs (a + c - b)
                                         : ans = abs (a - b);
      cout << ans << endl;
    }
}