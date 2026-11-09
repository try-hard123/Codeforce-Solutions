#include<bits/stdc++.h>

using namespace std;

void solve(){
int n;
cin >> n;


vector<long long> prefix(n, 0);
int x;
cin >> x;
prefix[0] = x;

for(int i = 1; i < n; i++){
int x;
cin >> x;
prefix[i] = prefix[i - 1] + x;
}

for(auto x : prefix) cout << x << " ";

cout << "\n";

}

int main(){
 ios::sync_with_stdio(false); cin.tie(nullptr);
 int t = 1;
 
 while(t--) solve();
 return 0;
}