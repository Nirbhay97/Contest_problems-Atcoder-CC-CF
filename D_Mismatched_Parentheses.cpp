#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    string s; cin >> s;
    stack<int>st;
    vector<int>pref(n, 0);

    for(int i = 0; i < n; i++){
        if(s[i] == '(') st.push(i);
        if(s[i] == ')'){
            if(!st.empty()){
                int t = st.top();
                st.pop();
                pref[t]++;
                if(i + 1 < n) pref[i + 1]--;
            }
        }
    }

    string ans = "";
    for(int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + pref[i];
    }

    for(int i = 0; i < n; i++){
        if(pref[i] <= 0) ans += s[i];
    }

    cout << ans << endl;
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