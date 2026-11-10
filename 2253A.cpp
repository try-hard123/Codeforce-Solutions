#include <bits/stdc++.h>
using namespace std;

// Data types
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// Containers
// Vector
using vi = vector<int>;
using vll = vector<ll>;
// Pair
using pii = pair<int, int>;
using pll = pair<ll, ll>;
// Map
using mii = map<int, int>;
using mll = map<ll, ll>;
using mci = map<char, int>;
using msi = map<string, int>;
// Unordered maps
using umii = unordered_map<int, int>;
using umci = unordered_map<char, int>;
using umsi = unordered_map<string, int>;


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

template <typename T>
bool prime(T& n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if ((n & 1) == 0) return false; 
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

// Debugging
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << '\n'
#else
#define debug(x)
#endif

/* Process:
1. Understand. Can I explain the problem and the sample in my own words? What are the inputs, the output and the limits?
2. Simplify. Solve a smaller or easier version first: tiny n, all elements equal, one element. Most patterns show up here.
3. Find what’s fixed and what changes. Look for invariants (parity, sum, gcd) and for what a single operation does. Ask what the best first move is.
4. Use the constraints as a hint. The limits tell you the complexity you’re allowed, and that narrows which ideas can work.
5. Reduce to something known. Does this look like sorting, prefix sums, binary search, a formula, or a greedy choice?
6. Plan, then check the plan. Say the idea in one sentence, and try to break it with a counterexample before coding.
7. Test and look back. Compare with a brute force, then ask what the trick was so you can reuse it.
*/

void solve() {
	int n; cin >> n;
	// 2 to n + 1
	/*a card can win againts each other 
	if last is prime  */

	if(n == 2) cout << "YES\n";

	else{
		n++;
		prime(n) ? cout << "YES\n" : cout << "NO\n";
	}
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