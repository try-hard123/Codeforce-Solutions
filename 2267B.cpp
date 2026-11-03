#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define all(x) (x).begin (), (x).end ()

void
solve ()
{
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      mp[x]++;
    }

  vector<pair<int, int>> a;
  for (auto &[key, cnt] : mp)
    {
      a.push_back ({ key, cnt });
    }

  n = a.size () - 1;

  while (true)
    {

      if (n == 0 && a[n].second == 0)
        break;

      if (a[n].second == 0)
        {
          n -= 1;
          continue;
        }

      cout << a[n].first << " ";
      a[n].second -= 1;

      for (int i = 0; i < n; i++)
        {
          if (a[i].second == 0)
            continue;

          cout << a[i].first << " ";
          a[i].second -= 1;
        }
    }

  cout << "\n";

  return;
}

int
main ()
{
  ios::sync_with_stdio (false);
  cin.tie (nullptr);

  int t = 1;
  cin >> t;

  while (t--)
    solve ();

  return 0;
}