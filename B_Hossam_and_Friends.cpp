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

    int n, m;
    cin >> n >> m;

    vector<int>nums;

    for(int i = 1; i <= n; i++) nums.push_back(i);

    map<int,vector<int>>mp;
    
    for(int i = 0; i < m; i++){
        
        int a, b;
        cin >> a >> b;

        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    
    int c = 0;
    vector<int>ans;
    for(int i = 0 ; i < n; i++){

        int it = nums[i];
        
    }


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