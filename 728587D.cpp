#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
 int n, m;
 cin >> n >> m;
 
 vector<ll> a(n + 1);
 
 for(int i = 1; i <= n; i++){
  cin >> a[i];
 }

 vector<ll> prefix(n + 2, 0);


 while(m--){
  int l, r, x;
  cin >> l >> r >> x;
  prefix[r + 1] -= x;
  prefix[l] += x;
 }

 for(int i = 1; i <= n; i++){
  prefix[i] = prefix[i] + prefix[i - 1];
  a[i] += prefix[i];
 }
 
 for(int i = 1; i <= n; i++) cout << a[i] << " ";
 cout << "\n";
}
 
int main(){
 ios::sync_with_stdio(false); cin.tie(nullptr);
 int t = 1;
 while(t--) solve();
 return 0;
}