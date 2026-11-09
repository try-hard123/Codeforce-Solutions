#include<bits/stdc++.h>

using namespace std;

void solve(){
 long long n;
 cin >> n;
 vector<long long> a(n);
 for(int i = 0; i < n; i++) cin >> a[i];
 
 long long sum = a[0];
 long long ending = a[0];
 
 for(int i = 1; i < n; i++){
  ending = max((ending + a[i]), a[i]);
  sum = max(ending, sum);
 }
 
 cout << sum << "\n";
}

int main(){
 ios::sync_with_stdio(false); cin.tie(nullptr);
 int t = 1;
 while(t--) solve();
 return 0;
}