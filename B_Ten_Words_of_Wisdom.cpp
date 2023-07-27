#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>>arr;
    int ind = -1, qua = -1;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a <= 10 and b >= qua){
            ind = i;
            qua = b;
        }
    }
    
    cout << ind + 1 << endl;
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