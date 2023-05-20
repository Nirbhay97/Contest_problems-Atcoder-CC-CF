#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int upper[26], lower[26];
    for(int i= 0; i< 26; i++){
        upper[i] = 0;
        lower[i] = 0;
    }

    for(int i = 0; i < n; i++){

        if(isupper(s[i])){
            upper[s[i] - 'A']++;
        }else{
            lower[s[i] - 'a']++;
        }
    }

    int cnt = 0;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        ans += min(upper[i], lower[i]);
        int diff = abs(upper[i] - lower[i]);
        if( k ){
            int can = min(diff/2,k);
            ans += can;
            k -= can;
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