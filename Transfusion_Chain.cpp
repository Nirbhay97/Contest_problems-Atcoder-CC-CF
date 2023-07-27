#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    string arr[n];
    map<string,int>mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int res = mp["O"] + mp["AB"];
    res += max(mp["A"], mp["B"]);
    cout << res << endl;
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
/* Hey you should check this out
* int overflow, array bounds
* reset global array and variable
* look for special cases (n=1?)
* do something instead of nothing and stay organized
* bruteforce to find pattern
* DON'T GET STUCK ON ONE APPROACH*/
