#include <bits/stdc++.h>
#define int long long 
using namespace std;
#define PII pair<int, int>
//Nirbhay kumar

class Compare {
public:
    bool operator()(PII below, PII above)
    {
        if (below.first > above.first) {
            return true;
        }
        else if (below.first == above.first
                 && below.second < above.second) {
            return true;
        }
 
        return false;
    }
};

void solve(){
    int b, s, h;
    cin >> b >> s >> h;
    if(b == 2){
        if(s || h) cout << 3 << endl;
    }else {
        b -= 2;
        if(b + 1 <= s + h){
            cout << 2*b + 3 << endl;
        } else{
            cout << 2*(s + h) + 1 << endl;
        }

    }
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