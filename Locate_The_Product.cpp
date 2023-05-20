#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);

    if( (arr[2] - arr[0])% 2){
    	cout << -1 << endl;
    	return;
    }
    int temp = ( arr[2] - arr[0])/2;
    arr[0] +=  temp, arr[2] -= temp;
    arr[1] += temp;
    if ( (arr[1] - arr[0]) % 2 == 1 ){
    	cout << -1 << endl;
    	return;
    }
    temp += (arr[1] - arr[0] )/2;
    cout << temp << endl;
    
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