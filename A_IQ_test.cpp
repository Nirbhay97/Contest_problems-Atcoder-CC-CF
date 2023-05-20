#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int nums[2] = {0};
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0) nums[0]++;
        else nums[1]++;
    }
 
    int ans = -1;
    if(nums[0] > 1) ans = 1;
    else ans = 0;

    for(int i = 0; i < n; i++){
        if(ans == 0 and arr[i] % 2 == 0){
            cout << i + 1 << endl;
            return;
        }

        if(ans == 1 and arr[i] % 2 == 1){
            cout << i + 1 << endl;
            return;
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