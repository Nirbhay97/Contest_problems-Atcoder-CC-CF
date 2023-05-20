#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    map<int,int>mp;

    for(int i = 0; i < n; i++) cin >> arr[i];

    if(x == 0){
       cout << "Yes" << endl;
       return;
    }
    
    for(int i = 0; i < n; i++){
        int req = arr[i] + x;
       // cout << arr[i] << " " << req << " " ;
        if(mp[req] > 0){
            cout << "Yes" << endl;
            return;
        }
        mp[arr[i]]++;
    }
    
    mp.clear();
    for(int i = n; i >= 0; i--){
        int req = arr[i] + x;
      //  cout << arr[i] << " " << req << " " ;
        if(mp[req] > 0){
            cout << "Yes" << endl;
            return;
        }
        mp[arr[i]]++;
    }

    cout << "No" << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
  //  cin >> t;
    while(t--) solve();
    return 0;
}