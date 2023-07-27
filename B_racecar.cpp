#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

bool fun(string s){
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}

void solve(){
    int n;
    cin >> n;
    vector<string>v;
    while(n--){
        string s;
        cin >> s;

        for(auto it : v){
            if(fun(it + s) or fun(s + it)){
                cout << "Yes" << endl;
                return;
            }
        }
        v.push_back(s);
    }

    cout << "No" << endl;
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