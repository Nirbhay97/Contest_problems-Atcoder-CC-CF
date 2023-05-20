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
    int n;
    cin >> n;

    vector<int>nums;
    for(int i = 1; i <= n*n; i++)nums.push_back(i);
    int t = n;

    vector<int>ans;
    int i = 0;
    int j = n*n - 1;

    while(i <= j){
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        i++;
        j--;
    }
    
    if(n % 2) ans.pop_back();

    j = 0;
    for(i = 0; i < n; i++){

        while(t--){
            cout << ans[j] << " ";
            j++;
            
        }

        t = n;
        cout << endl;
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