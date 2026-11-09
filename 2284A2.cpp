#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
	vector<ll> cnt(25, 0);
	ll total = 0;

	for(int i = 0; i < n; i++){
		int x; cin >> x;
		cnt[x]++;
		total += (1ll << x);
	}

	ll required = total / 2;
	ll pointA = 0, pointB = 0;

	for(int i = 24; i >= 0; i--){
		if(cnt[i] == 0) continue;
		ll value = (1ll << i);

		pointA += value*(min(cnt[i], (required - pointA) / value));
	}

	pointB = total - pointA;

	cout << pointA*pointB << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}