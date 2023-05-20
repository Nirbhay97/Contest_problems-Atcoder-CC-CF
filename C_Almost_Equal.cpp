#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

int helper(string a, string b, int m) {
    int dis = 0;
    for (int i = 0 ; i < m ; i++) {
        if ( a[i] != b[i] ) dis++;
    }
    return dis;
};

void solve () {
    int n, m;
    cin >> n >> m;
  
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool found = false;
    sort(arr.begin(), arr.end());
    do {
        bool temp = true;
        for (int i = 1 ; i < n ; i++) {
            temp &= (helper(arr[i], arr[i - 1], m) == 1 );
        }
        if (temp) {
            found = true;
            break;
        }
    }
    while(next_permutation(arr.begin(), arr.end()));

    if ( found ) cout << "Yes" << endl; 
    else  cout << "No" << endl;;
    
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