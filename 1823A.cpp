#include<bits/stdc++.h>

using namespace std;

void solve(){
 int n, k;
 cin >> n >> k;
 
 int one = 0;
 int minus_one = 0;

 int first = 0;
 int second = 0;

 for(int i = 1; i <= n; i++){
   one = i*(i - 1) / 2;
   minus_one = (n - i)*(n - i - 1) / 2;
   if(one + minus_one == k){
     first = i;
     second = n - i;
      break;
    }
 }
 if(first == 0 && second == 0){
   cout << "NO" << "\n";
   return;
 }
 cout << "YES" << "\n";
 for(int i = 1; i <= first; i++){
   cout << 1 << " ";
  }
 for(int i = 1; i <= second; i++){
   cout << -1 << " ";
  }
 cout << "\n";
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