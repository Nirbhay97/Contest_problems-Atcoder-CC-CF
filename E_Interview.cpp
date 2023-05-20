#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n + 1];
    int ans = 0;
    for(int i = 0; i < n; i++){
        arr[i] = 0;
    }
    for(int i = 1 ; i <= n ; i++) cin >> arr[i];   
    for (int i = 1 ; i <= n ; i++) arr[i] += arr[i-1];
    
    int low = 1,high = n;
	while(low <= high){
		int weight = (high + low)/2;
		cout << " ? " << weight << " ";
		for(int i = 1 ; i <= weight ; i++) cout << i << " ";
		cout << endl; cout.flush();
		int a; cin >> a;
		if ( a == (arr[weight]) ) low = weight + 1;
		else ans = weight, high = weight - 1;	
	}

	cout << "!" << " " << ans << endl;
	cout.flush();
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