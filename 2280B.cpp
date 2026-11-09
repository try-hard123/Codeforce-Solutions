#include <bits/stdc++.h>
using namespace std;

// Data types
using ii = int;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// Containers
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Macros
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second

// Constants
const ll INF = 4e18; //Infinity
const int MOD = 1e9 + 7;

// Helper functions
//Updates a only when b is greater 
template <typename T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

//Updates a only when b is smaller
template <typename T>
bool chmin(T &a, const T &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

// Debugging
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << '\n'
#else
#define debug(x)
#endif

void solve() {
	ll n, k; cin >> n >> k;

	ll evenA = 0, evenB = 0, oddA = 0, oddB = 0;

	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		if(x & 1) oddA++;
		else evenA++;
	}

	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		if(x & 1) oddB++;
		else evenB++;
	}

	if(evenA == evenB && oddA == oddB){
		cout << "YES" << "\n";
		return;
	}

    //2 case's;N
	if(evenA > evenB){
		cout << (k % 2 != 0 ? "YES" : "NO") << '\n';
		return;
	}

	cout << (k % 2 == 0 ? "YES" : "NO") << '\n';
	return;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}