#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

        int n;
        cin >>n;
        vector<int> arr1(n);
        vector<int> arr2(n);

        for(int i = 0; i < n; i++)
            cin >> arr1[i];
        for(int i = 0; i < n; i++)
            cin >> arr2[i];

        int flag = false;

        for(int i = 0; i < n; i++){
            if(arr1[i] != arr2[i]){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "YES" << endl;
            return;
        }

        if (arr1[n-1]^arr2[n-1] or  arr1[0]^arr2[0]){
            cout << "NO" << endl;
            return;
        }

        vector<int> temp1(arr1.begin(), arr1.end());
        vector<int> temp2(arr1.begin(), arr1.end());

        for(int i = n  - 2 ; i >= 0 ; i--) temp2[i] |= temp2[i+1];

        for(int i = 1 ; i < n ; i++) temp1[i] |= temp1[i-1];
    
        for(int i = 0 ; i < n ; i++){
            if ( arr1[i] != arr2[i] ){
                if ( arr1[i] == 0 and arr2[i] == 1 ){
                    if ( temp1[i] == 0 and temp2[i] == 0  ){
                        cout << "NO" << endl;;
                        return;
                    }
                }
                if ( arr2[i] == 0 and arr1[i] == 1){
                    cout << "NO" << endl;
                    return;
                }        
            }
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