#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    char arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        set<char>s, s2;
        for(int j = 0; j < 3; j++){
            s.insert(arr[i][j]);
            s2.insert(arr[j][i]);
        }
        if(s.size() == 1 and arr[i][0] != '.'){
            cout << arr[i][0]<< endl;
            return;
        }

        if(s2.size() == 1 and arr[0][i] != '.'){
            cout << arr[0][i]<< endl;
            return;
        }


    }

    if(arr[1][1] == arr[0][0] and arr[0][0] == arr[2][2] and arr[1][1] != '.'){
        cout << arr[1][1] << endl;
        
        return;
    }

    if(arr[1][1] == arr[0][2] and arr[1][1] == arr[2][0] and arr[1][1] != '.'){
        cout << arr[1][1] << endl;
        return;
    }

    cout << "DRAW" << endl;

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