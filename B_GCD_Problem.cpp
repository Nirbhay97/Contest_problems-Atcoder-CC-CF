#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    
    int t1 = 0, t2 = 0, c = 1;
    t2 = (n - 1)/2;
    t1 = n - 1 - t2;

    if(t1 == t2){
         if(t1 & 1){
            t1 -= 2;
            t2 += 2;
         }else{
            t1 -= 1;
            t2 += 1;
         }
    }
   
    cout << t1 << " " << t2 << " " << c;
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