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
      int n;
      cin >> n;
      map<int, vector<int>> mp;
      for (int i = 0; i < n; i++)
        {
          int x;
          cin >> x;
          mp[x];
          mp[x].push_back (i);
        }
      int ans = 0;
      for (auto &[key, value] : mp)
        {
          for (int i = 1; i < (int)value.size (); i++)
            {
              ans = max (ans, n - (value[i] - value[i - 1]));
            }
        }
      (ans > 0) ? cout << ans << "\n" : cout << -1 << "\n";
    }
  return 0;
}