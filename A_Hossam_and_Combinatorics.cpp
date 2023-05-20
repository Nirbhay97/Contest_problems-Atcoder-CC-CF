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
    
    int n;
    cin >> n;

    vector<int>v;

    for(int i = 0; i < n; i++){
        
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int mn = v[0];
    int mx = v[n - 1];

    int ans = 0;
    if(mn == mx) ans = n*(n - 1);
    else{
    int a = 0;
    int b = 0;
    int i = 0;
    while(i < n){
        if(v[i] == mn) a++, i++;
        else break;

    }

    i = n - 1;
    while(i >= 0){
        if(v[i] == mx) b++, i--;
        else break;
    }

    ans = 2*a*b;


    }

   cout << ans << endl;

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