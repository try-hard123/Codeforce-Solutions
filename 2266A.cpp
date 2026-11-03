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
      int n;
      cin >> n;
      int a, b, c;
      cin >> a >> b >> c;
      int ans = n - min (a, min (b, c));
      cout << ans << endl;
    }
}