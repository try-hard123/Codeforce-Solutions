#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
int n, q;
cin >> n >> q;

vector<ll> prefix_xor(n + 1, 0);

for(int i = 1; i <= n; i++){
int x;
cin >> x;
prefix_xor[i] = prefix_xor[i - 1] ^ x;
}

while(q--){
 int l, q;
 cin >> l >> q;
 
 cout << (prefix_xor[q] ^ prefix_xor[l - 1]) << "\n";
}
}

int main(){
ios::sync_with_stdio(false); cin.tie(nullptr);
int t = 1;
while(t--) solve();
return 0;
}