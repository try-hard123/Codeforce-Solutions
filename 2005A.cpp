#include<bits/stdc++.h>

using namespace std;

void solve(){
 int n;
 cin >> n;

 char vowels[] = {'a', 'e', 'i', 'o', 'u'};
 
 int cnt = n / 5;
 int extra = n % 5; //Extra vowels left 

 for(int i = 0; i < 5; i++){
   if(extra){
    cout << vowels[i];
    extra--;
   }
   int a = cnt;
   while(a--) cout << vowels[i];
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