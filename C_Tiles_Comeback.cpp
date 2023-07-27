#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>arr(n);
    map<int,int>mp;
    for(auto &val : arr){
        cin >> val;
        mp[val]++;
    }

    // for(auto it : arr) cout << it << " " ;
    int last = arr[n - 1];
    int first = arr[0];

    if(first == last){
        if(mp[first] >= k) cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    } else{
        int cnt = 0;
        int ind = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] == first){
                cnt++;
                if(cnt >= k){
                    ind = i;
                    break;
                }
            }
        }

        if(cnt < k){
            cout << "NO" << endl;
            return;
        }

        cnt = 0;
        for(int i = ind + 1; i < n; i++){
            if(arr[i] == last){
                cnt++;
            }
        }

        if(cnt >= k){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }

    // cout << ",,,,,," << endl;
    
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