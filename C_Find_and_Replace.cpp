#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
	cin >> n;
    string s;
    cin >> s;
    vector<vector<int>>nums(2, vector<int>(26, 0));
    for(int i = 0 ; i < n ; i++) nums[ i % 2 ] [ s[i] - 'a']++;
    bool flag = true;
  	for(int i = 0 ; i < n ; i += 2) if ( nums[1][s[i]-'a'] > 0) flag = false;
  	if(flag)cout << "YES";
    else cout << "NO";
    cout << endl;
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

