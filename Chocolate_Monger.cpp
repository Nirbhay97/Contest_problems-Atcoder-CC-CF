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
    int n, x;
    cin >> n >> x;
    vector<int>nums;
    set<int>s;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        nums.push_back(t);
        s.insert(t);
    }
    
    int dist = s.size();
   
    int nondist = n - dist;
    if(nondist >= x) 
        cout << dist << endl;
    else 
        cout << n - x << endl;       
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