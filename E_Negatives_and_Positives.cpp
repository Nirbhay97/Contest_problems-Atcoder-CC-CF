#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    int x, y;
	cin >> x >> y;
	int d = abs(x-y);
    if (d >= 2){
		if(x > y) cout <<"chef" << endl;
		else cout <<"chefina" << endl;
	}
	else{
		if(x % 2 == 1) cout <<"chef" << endl;
		else cout <<"chefina" << endl;
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