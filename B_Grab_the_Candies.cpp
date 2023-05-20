#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<int>even, odd;
    int evensum = 0, oddsum = 0;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        if(t % 2 == 0){
            even.push_back(t);
            evensum += t;
        }else{
             odd.push_back(t);
             oddsum += t;
        }
    }
    if(oddsum >= evensum){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    
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