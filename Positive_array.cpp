#include <algorithm>
#include <map>
#include <iostream>
#include <set> 
#include <deque>
#include <iterator>
#include <queue>
#include <climits>
#include <stack>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <tuple>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(auto & it : nums) cin >> it;
    sort(nums.begin(), nums.end());
    int ans = 1;
    int i = 1;
    
    vector<int>::iterator it;
    while (nums.size() > 0){
        it = lower_bound(nums.begin(), nums.end(), i);
        if(it == nums.end()) ans++, i = 1;
        else i++, nums.erase(it);
    }
    cout << ans << endl;
    return;
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