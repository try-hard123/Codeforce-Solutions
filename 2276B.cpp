#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(dx) (x).begin (), (x).end ()

void
solve ()
{
  string s;
  cin >> s;
  int cnt = 1;
  int n = s.size ();
  bool different_adjacent = false;
  bool same_adjcaent = false;
  for (int i = 1; i < n - 1; ++i)
    {
      if (s[i - 1] == s[i + 1] && s[i + 1] == s[i])
        same_adjcaent = true;
      if (s[i - 1] == s[i + 1] && s[i + 1] != s[i])
        different_adjacent = true;
    }
  cout << cnt + same_adjcaent + different_adjacent << endl;
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
