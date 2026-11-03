#include<bits/stdc++.h>

using namespace std;

void solve(){
int n;
cin >> n;
/*
vector<vector<char>> a(n, vector<char>(n));

for(int i = 0; i < n; i++){
 for(int j = 0; j < n; j++){
   cin >> a[i][j];
 }
}

int counter = 0;
 
for(int i = 0; i < n; i++){
 for(int j = 0; j < n; j++){
  if(a[i][j] == '.') continue;

  int row = j + 1;
  while(row < n){
   if(a[i][j] == a[i][row]) counter++;
   row += 1;
  }

  int col = i + 1;
  while(col < n){
   if(a[i][j] == a[col][j]) counter++;
   col += 1;
  }

 }
} */
 
 vector<int> row(n, 0), col(n, 0);
 
 for(int i = 0; i < n; i++){
  for(int j = 0; j < n; j++){
   char a;
   cin >> a;
   
   if(a == 'C'){
     row[i]++;
     col[j]++;
    }
 }
}

 int counter = 0;
 
 for(int i = 0; i < n; i++){
  counter += (row[i]*(row[i] - 1)) / 2 + (col[i]*(col[i] - 1)) / 2;
 }

  cout << counter << "\n";
}

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t = 1; 
while(t--) solve();
return 0;
}