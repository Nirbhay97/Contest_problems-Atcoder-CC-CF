#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

void solve(){

    int n = 10;
    queue<int>q;
    vector<int>nums = {5,6};
    q.push(5);
    q.push(6);

    while(n--){

        int t = q.front();
        q.pop();
        cout << t << endl;

        for(auto it : nums){
            int p = t*10 + it;
            q.push(p);
        }
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}