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
    int v[31]={0};
    
    vector<int> nums(n);

    for (auto &it : nums){
        cin >> it;
        for (int i = 22 ; i >= 0 ; i--){
            if ( (it&(1<<i)) ){
                v[i]++;
            }
        }
    }
    
    for (int i = 0 ; i < 22 ; i++){
        if ( (v[i] % 2 == 0) ||  ( n - v[i]) % 2 == 0 )
            continue;  
        else{
            cout << "NO" << endl;
            return;
        }
        
    }

    cout << "YES" << endl;
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