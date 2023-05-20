#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if(P == S) return true;
    return false;
}
 
void solve(){
    int n;
    cin >> n;
    vector<string>single, last;
    int N = (n - 1)*2;
    for(int i = 0; i < N; i++){
        string t;
        cin >> t;
        if(t.size() == 1) single.push_back(t);
        if(t.size() == n - 1)last.push_back(t);
    }

    string temp = last[0] + last[1];
    if(isPalindrome(temp)){
        if(single[0] == single[1])cout << "YES" << endl;
        else cout << "NO" << endl;
    }else cout << "NO" << endl;
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