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
	ii n; cin >> n;

	if(n == 1){
		cout << "! NO" << endl;
		return;
	}

	ii total;
    //Total ones;
	cout << "? " << 1 << " " << n << endl;
	cin >> total;

	if(total == -1) exit(0);

	if(total == 0 || total == n){
		cout << "! NO" << endl;
		return;
	}

	//find ones till total;
	ll first;
	cout << "? " << 1 << " " << total << endl;
	cin >> first;

	if(first == -1) exit(0);

	//check if atleast one 1 or more;
	if(first == total){
		cout << "! NO" << endl;
		return;
	}

	cout << "! YES" << endl;

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