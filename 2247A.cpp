#include <bits/stdc++.h>
using namespace std;

// Data types
using i = int;
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
 i n; cin >> n;
 //vi a(n);
 i sum = 0;

 for(int a = 0; a < n; a++){
 	i x; cin >> x;
 	sum += x;
 }

/*
 for(int i = 0; i < n; i++){
 	cin >> a[i];
 	sum += a[i];
 }
 i excess = sum / 4;

 for(int i = 0; i < n - 1; i++){
 	if(excess == 0) break;
 	if(excess > 0 && a[i] == 1 && a[i + 1] == 1) {
 		excess--;
 		sum -= 4;
 		i -= 1;
 		i += 2;
 	}
 	if(excess < 0 && a[i] == -1 && a[i + 1] == -1){
 		excess++;
 		sum += 4;
 		i -= 1;
 		i += 2;
 	}
 }

 if(sum == 0){
 	cout << "YES\n";
 }
 else cout << "NO\n"; */

 if(sum % 4 == 0) cout << "YES\n";
 else cout << "NO\n";
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