#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
	vector<char> a(n);

	// Brute all possibilites
	
	int paper = 0, scissors = 0, hoof = 0;
	int prefix = 0, suffix = 0, score = 0;
    int final_score = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 'P') paper++;
		if(a[i] == 'S') scissors++;
		if(a[i] == 'H') hoof++;
	}

	final_score = max(paper, max(scissors, hoof));

	// H and S
	suffix = paper;
	score = max(score, suffix);
	for(int i = 0; i < n; i++){
		if(a[i] == 'S') prefix++;
		if(a[i] == 'P') suffix--;

		score = max(score, prefix + suffix);
	}

	final_score = max(final_score, score);

	// H and P
	score = 0;
	prefix = 0;
	suffix = hoof;
	score = max(score, suffix);
	for(int i = 0; i < n; i++){
		if(a[i] ==  'S') prefix++;
		if(a[i] == 'H') suffix--;

		score = max(score, prefix + suffix);
	}

	final_score = max(final_score, score);

	// S and P
	score = 0;
	prefix = 0;
	suffix = hoof;
	score = max(score, suffix);
	for(int i = 0; i < n; i++){
		if(a[i] == 'P') prefix++;
		if(a[i] == 'H') suffix--;

		score = max(score, prefix + suffix);
	}

	final_score = max(final_score, score);

	// S and H
	score = 0;
	prefix = 0;
	suffix = scissors;
	score = max(score, suffix);
	for(int i = 0; i < n; i++){
		if(a[i] == 'P') prefix++;
		if(a[i] == 'S') suffix--;

		score = max(score, suffix + prefix);
	}

	final_score = max(final_score, score);

	// P and H
	score = 0;
	prefix = 0;
	suffix = scissors;
	score = max(score, suffix);
	for(int i = 0; i < n; i++){
		if(a[i] == 'H') prefix++;
		if(a[i] == 'S') suffix--;

		score = max(score, suffix + prefix);
	}

	final_score = max(final_score, score);

	// P and S
	score = 0;
	prefix = 0;
	suffix = paper;
	score = max(score, suffix);
	for(int i = 0; i < n; i++){
		if(a[i] == 'H') prefix++;
		if(a[i] == 'P') suffix--;

		score = max(score, suffix + prefix);
	}

	final_score = max(final_score, score);

	cout << final_score << '\n';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	while(t--) solve();
	return 0;
}