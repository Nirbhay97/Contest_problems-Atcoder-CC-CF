#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    int ans = 0;

    for(int i = 0; i <= n; i++){
        int flag = 1;
        int last = n;
        int first = i;
        for(int j = 0; j < k - 2; j++){
            int temp = first;
            first = last - first;
            last = temp;

            flag &= min(first, last) >= 0;
            flag &= first <= last;
            // flag &= 
            if(!flag) break;
        }
        if(flag) ans++;
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