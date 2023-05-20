#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    
    priority_queue<pair<int,int>>pq;
    //priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pqmin;

    int cnt = 0;
    int flag = false;
    vector<int>arr(n);
    for(int i = 0;i < n; i++){
        cin >> arr[i];
        if( arr[i] == 1 ) cnt++;
        pq.push({arr[i], i + 1});
      //  pqmin.push({t, i + 1});
    }

    if(cnt == n) cout << 0 << endl;
    else if(cnt < n and cnt > 0) cout << -1 << endl;
    else{
        vector<pair<int,int>>nums;
        int ans = 0;
        int p = 30*n;
        while(p--){
            ans++;
            int ele = pq.top().first;
            int ind = pq.top().second;
            int val = arr[0], ind2 = 1;
            int cnt1 = 0;
          //  set<int>s;
          //  s.insert(arr[0]);
            for(int i = 1; i < n; i++){
               // s.insert(arr[i]);
               // if(arr[i] == arr[0]) cnt1++;
                if(arr[i] < val){
                    val = arr[i];
                    ind2 = i + 1;
                }
            }
            if(val == ele){
                cout << ans << endl;
                for(auto it : nums) cout << it.first << " " << it.second << endl;
                break;
            }
            pq.pop();
            pq.push({ele/val, ind});
            arr[ind - 1] = ele/val;
            nums.push_back({ind, ind2});
        }
        cout << endl;
    }
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