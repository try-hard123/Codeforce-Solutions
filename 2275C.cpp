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
      vector<long long> a (n);
      for (int i = 0; i < n; i++)
        cin >> a[i];
      int m = n - 4;
      vector<long long> b (m);
      for (int i = 0; i < m; i++)
        b[i] = a[i] + a[i + 2] - a[i + 4];
      long long cnt = 0;
      map<int, int> mp;
      for (int i = 0; i < m; i++)
        {
          cnt += mp[b[i]];
          mp[b[i]]++;
        }
      for (int i = 0; i < m; i++)
        {
          if (i + 2 < m && b[i] == b[i + 2])
            cnt--;
          if (i + 4 < m && b[i] == b[i + 4])
            cnt--;
        }
      cout << cnt << endl;
    }
}