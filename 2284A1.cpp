#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;

	cout << 1ll*((n / 2) + n % 2)*(n / 2) << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}