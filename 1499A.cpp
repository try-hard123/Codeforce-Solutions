#include<bits/stdc++.h>

using namespace std;

using ll = long long;

void solve(){
 int n, k1, k2;
 cin >> n >> k1 >> k2;
 int w, b;
 cin >> w >> b;
 /*
 int counter_white = 0;
 int counter_black = 0;

 int block_left_for_black_row1 = n - k1;
 int block_left_for_black_row2 = n - k2;
 
 int block_left_for_white = abs(k1 - k2);
 
 if(block_left_for_white >= 2){
   counter_white += block_left_for_white / 2;
 }
  
 counter_white += abs(max(k1, k2) - block_left_for_white);

 int block_left_for_black = abs(block_left_for_black_row1 - block_left_for_black_row2);
 
 if(block_left_for_black >=2 ) {
   counter_black += block_left_for_black / 2;
 }
  
 counter_black += abs(max(block_left_for_black_row1, block_left_for_black_row2) - block_left_for_black);

 if(counter_black >= b && counter_white >= w){
   cout << "YES" << "\n";
   return;
 }
 
 cout << "NO" << "\n";
 return;*/

 int white = k1 + k2;
 int black = 2 * n - white;

 if(white / 2 >= w && black / 2 >= b){
   cout << "YES" << "\n";
   return;
 }

 cout << "NO" << "\n";
 return;
}

int main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
 int t = 1;
 cin >> t;
 while(t--) solve();
 return 0;
}