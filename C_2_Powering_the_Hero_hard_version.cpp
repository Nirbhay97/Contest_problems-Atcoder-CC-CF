#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = 0;
    priority_queue<int>pq;

    for(int i = 0; i < n; i++){

        if(arr[i] == 0 and !pq.empty()){
            ans += pq.top();
            pq.pop();
        }else{
            pq.push(arr[i]);
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
    while(t--) solve();
    return 0;
}