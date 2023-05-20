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
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    if(nums[0] == nums[n - 1]){
        cout << "NO" << endl;
    }else{
    
        
        cout << "YES" << endl;
        int first = nums[0];
        int j = 1;
        while(j < n and nums[j] == first){
            j++;
        }

        for(int i = j; i >= 0; i--)cout << nums[i] << " ";
        for(int i = j + 1; i < n; i++) cout << nums[i] << " ";
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