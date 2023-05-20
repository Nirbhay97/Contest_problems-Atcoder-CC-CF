#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, m, d;
    cin >> n >> m >> d;
    
    vector<int>arr1(n);
    vector<int>arr2(m);
    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < m; i++) cin >> arr2[i];
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    int ans = -1;
    for(int i = 0; i < n; i++){
        int ele = arr1[i];
        int j = 0, k = m - 1;
        while(j <= k){
            int mid = (j + k)/2;
            int t = abs(ele - arr2[mid]);

            if(t <= d){
                ans = max(arr1[i] + arr2[mid], ans);
                j = mid + 1;
            }else {
                if(ele < arr2[mid]) k = mid - 1;
                else j = mid + 1;
            }
        }
    }
    cout << ans << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}