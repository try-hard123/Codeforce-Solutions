#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  ios_base::sync_with_stdio (false);
  cin.tie (nullptr);
  int t;
  cin >> t;
  while (t--)
    {
      int n, k;
      cin >> n >> k;
      vector<int> ans (n + 2, 0);
      for (int i = 0; i < n; i++)
        {
          int v;
          cin >> v;
          ans[v]++;
        }
      int cnt = 0;
      int prefix = 0;
      for (int i = 0; i <= n; i++)
        {
          prefix += ans[i];
          if (ans[i] >= 1 && prefix >= k * (i + 1))
            cnt = i + 1;
          else
            break;
        }
      cout << cnt << "\n";
    }
  return 0;
}