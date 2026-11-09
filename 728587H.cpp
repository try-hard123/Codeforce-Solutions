#include <bits/stdc++.h>
using namespace std;

// Data types
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
    ll n, s;
    cin >> n >> s;

    vll arr(n + 1, 0);
    map<ll,ll> mp;
    ll cnt = 0;

    for(int i = 1; i <= n; i++){
        ll x; cin >> x;
        arr[i] = arr[i - 1] + x;
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] == s) cnt++;
        else{
            ll required = arr[i] - s;

            if(mp.find(required) != mp.end()) cnt++;
        }

        mp[arr[i]] = 0;
    }

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
   // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
