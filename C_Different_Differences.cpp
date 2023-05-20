#include <algorithm>
#include <map>
#include <iostream>
#include <set>
#include <array> 
#include <deque>
#include <forward_list>
#include <list>
#include <iterator>
#include <vector>
#include <queue>
#include <climits>
#include <stack>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <tuple>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    
    
   int k,m;
   cin >> k >> m;  
   map<int,int> mapp;
   int diff = m - k;
   for (int i = 1 ; i <= m ; i++) mapp[i] = 1;
       
   int temp = 1;

   for (int i = 3 ; i < m + 1 ; i++){
      if ( temp < diff + 1 ){

          temp = min(temp,diff);
          diff = diff - temp;
          for (int j = i ; j <= min(i + temp - 1, m ); j++) mapp[j] = 0;          
          i += temp;
          temp++;
      }
   }
   vector<int> res;

   for (auto it : mapp)
     if ( it.second == 1)
        res.push_back(it.first);
     
   
   for (int i  = 0 ; i < k ; i++) cout << res[i] << " ";
    
   
   cout << "\n";
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
while(t--){
    solve();
}
return 0;
}