#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

void solve(){
   
   int n, n1, n2;
   cin >> n >> n1 >> n2;
   vector<pair<int, int>> row1, row2;
   for (int i = 0 ; i < n1 ; i++) {
      int a, b;
      cin >> a >> b;
      row1.push_back({a, b});
   }
 
   for (int i = 0 ; i < n2 ; i++) {
      int a, b;
      cin >> a >> b;
      row2.push_back({a, b});
   }
 
   int val1 = 0, val2 = 0, ans  = 0;
   while (val1 < n1 or val2 < n2) {
     
      if ( row1[val1].first == row2[val2].first ) {
         int temp = 0;
         temp = min(row1[val1].second, row2[val2].second);
         ans += min(row1[val1].second, row2[val2].second);
         row1[val1].second -= temp;
         row2[val2].second -= temp;
         if ( row1[val1].second == 0 ) val1++;
         if ( row2[val2].second == 0 ) val2++;
      }
      else{
         int temp = min(row1[val1].second, row2[val2].second);
         row2[val2].second -= temp;
         row1[val1].second -= temp;
         if ( row2[val2].second == 0 ) val2++;
         if ( row1[val1].second == 0 ) val1++;
         
      }
 
   }
   cout << ans << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}