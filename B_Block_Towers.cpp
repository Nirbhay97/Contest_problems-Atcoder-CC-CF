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

    vector<int>v(n);

    for(auto &it: v) cin >> it;

    int ans = v[0];

    priority_queue <int, vector<int>, greater<int>>pq;

    for(int i = 1; i < n; i++){

        pq.push(v[i]);
    }

    
    
    while(!pq.empty()){

        int topp = pq.top();
        pq.pop();
        if(topp > ans){

            int req = ((topp - ans) + 1)/2;
            
            int inse = topp - req;
            ans += req;

        }
    }

    cout << ans << endl;

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