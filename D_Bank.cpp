#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, q;
    cin >> n >> q;
    set<int>s0,s1;
    for(int i = 1; i <= n; i++) s1.insert(i);
    int id = 1;
    for(int i = 0; i  < q; i++){
        int a;
        cin >> a;
        if(a == 1){
            s1.insert(id);
            id++;
        }else if(a == 2){
            int idno;
            cin >> idno;
            s1.erase(idno);
        }else if(a == 3){
            cout << *s1.begin() << endl;
        }
    }

}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
  //  cin >> t;
    while(t--) solve();
    return 0;
}