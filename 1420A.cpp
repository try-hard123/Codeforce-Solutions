#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(dx) (x).begin (), (x).end ()

void
solve ()
{
  int n;
  cin >> n;
  vector<int> a (n, 0);
  for (int i = 0; i < n; ++i)
    {
      int x;
      cin >> x;
      a[i] = x;
    }

  bool sorted = true;
  for (int i = 0; i < n - 1; ++i)
    {
      if (a[i] <= a[i + 1])
        {
          sorted = false;
          break;
        }
    }
  if (sorted)
    {
      cout << "NO" << "\n";
    }
  else
    {
      cout << "YES" << "\n";
    }
}

int
main ()
{
  ios::sync_with_stdio (0);
  cin.tie (nullptr);
  int t = 1;
  cin >> t;
  while (t--)
    solve ();
  return 0;
}
