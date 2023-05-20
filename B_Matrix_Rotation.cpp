#include <algorithm>
#include <map>
#include <iostream>
#include <set>
#include <array> 
#include <deque>
#include <forward_list>
#include <list>
#include <iterator>
#include <vector>
#include <queue>
#include <climits>
#include <stack>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <tuple>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    int a[2][2];
    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            int t;
            cin >> t;
            a[i][j] = t;

        }
    }

    int N = 2;

    int l = 4;

    bool ans = false;
    while(l--){

        for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
 
            
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }

    int topleft = a[0][0];
    int topright = a[0][1];
    int botleft = a[1][0];
    int botright = a[1][1];

    if((topleft < topright) and (botleft < botright) and (topleft < botleft and topright < botright)) ans = true;

    
    }

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    

}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
while(t--){
    solve();
}
return 0;
}