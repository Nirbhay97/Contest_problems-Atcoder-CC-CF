#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

vector<string>ans = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

void solve(){
    string s;
    cin >> s;

    for(auto it : ans){
        if(s == it){
            cout << "Yes" << endl;
            return;
        }
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