#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
 int n, m, q;
 cin >> n >> m >> q;
 
 vector<ll> a(n + 1);
 for(int i = 1; i <= n; i++){
  cin >> a[i];
 }
 
 vector<ll> d(n + 2, 0);
 while(m--){
  int l, r, x;
  cin >> l >> r >> x;
  d[l] += x;
  d[r + 1] -= x;
 }
 
 for(int i = 1; i <= n; i++){
   d[i] = d[i - 1] + d[i];
   a[i] += d[i];
 }

 vector<ll> prefix(n + 1,0);
 for(int i = 1; i <= n; i++){
  prefix[i] = prefix[i - 1] + a[i];
 }

 while(q--){
 int l, r;
 cin >> l >> r;
 cout << prefix[r] - prefix[l - 1] << '\n';
 }
}

int main(){
 ios::sync_with_stdio(false); cin.tie(nullptr);
 int t = 1;
 while(t--) solve();
 return 0;
}