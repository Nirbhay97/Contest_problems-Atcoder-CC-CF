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
    int ans = 0;
    map<int,int>mp;

    for(int i = 2; i*i <= n; i++){

        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n /= i;
            if(!mp[cnt]){
                mp[cnt] = i;
            }else mp[cnt] *= i;
        }
    }

    if(n != 1){
        if(!mp[1])mp[1] = n;
        else mp[1] *= n;
    }

    for(auto it : mp){
        ans += it.second;
    }

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