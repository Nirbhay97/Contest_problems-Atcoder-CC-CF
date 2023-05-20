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
    
    int n, y;
    cin >> n >> y;
    
    int arr[22];
    int v[22];
    for(int i = 0; i < 22; i++){
        v[i] = 0;
        arr[i] = 0;
    }
    
    std::vector<int>nums(n);
    for(auto & it : nums){
        cin >> it;
        
        int i = 0;
        int count = 0;
        while (it) {
           
            count = it & 1;
            if(count ) arr[i]++;
            it >>= 1;
            i++;
        }
    }
    
    
    
    int count = 0;
    int j = 0;
    while (y) {
           
            count = y & 1;
            if(count > 0) v[j]++;
            y >>= 1;
            j++;
        }
    
    int ans = 0;
    int flag = 0;

    // for(auto val : arr){
    //     cout << val << " ";
    // }
    // cout << endl;
    // for(auto val : v){
    //     cout << val << " ";
    // }
    // cout << endl;
    for(int i = 0; i < 22; i++){
        
        if(arr[i] > 0 and v[i] == 0){
            cout << -1 << endl;
            flag = 1;
            break;
        }
        if( arr[i] == 0 and v[i] > 0){
            ans += (int)pow(2,i);
        }
        
    }
    
    if(flag == 0)
        cout << ans << endl;
    
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}