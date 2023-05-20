#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int N, M;
    cin >> N >> M;

    int ans=LLONG_MAX;
	for (int i=1; i <= max(sqrt(M), sqrt(N)) + 10;i++){
		int b = (M + i - 1)/i;
		if ((i*b) >= M && i<=N && b<=N ){
			ans = min(ans,i*b);
		}
	}
    if(ans == LLONG_MAX) cout << -1 << endl;
    else cout << ans << endl;
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