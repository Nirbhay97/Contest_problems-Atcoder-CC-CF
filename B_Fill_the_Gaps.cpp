#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i = 0 ;i < n; i++){
        cin >> nums[i];
    }

    for(int i = 0;  i < n - 1 ; i++){
        cout << nums[i] << " ";
        if(abs(nums[i] - nums[i + 1]) != 1){
            if(nums[i] < nums[i + 1]){
                int t = nums[i] + 1;
                while(t < nums[i + 1]){
                    cout << t << " ";
                    t++;
                }
            }else{

                int t = nums[i] - 1;
                while(t > nums[i + 1]){
                    cout << t << " ";
                    t--;
                }
            }
           
        }
    }
    cout << nums[n - 1] << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
   // cin >> t;
    while(t--) solve();
    return 0;
}