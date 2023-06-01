#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

int arr[101];
int m = 1e9 + 7;
int binomialCoeff(int n, int r)
{
 
    if (r > n) return 0;
    int inv[r + 1] = { 0 };
    inv[0] = 1;
    if(r+1>=2) inv[1] = 1;

    for (int i = 2; i <= r; i++) {
        inv[i] = m - (m / i) * inv[m % i] % m;
    }
    
    int ans = 1;
    for (int i = 2; i <= r; i++)ans = ((ans % m) * (inv[i] % m)) % m;
    for (int i = n; i >= (n - r + 1); i--) ans = ((ans % m) * (i % m)) % m;
    
    return ans;
}

void factorial(){
    arr[0] = 1;
    for(int i = 1; i < 101; i++){
        arr[i] = arr[i - 1]*i % m;
    }
}
// int binomialCoeff(int k, int n)
// {
//     int C[k + 1];
//     memset(C, 0, sizeof(C));
 
//     C[0] = 1;
//     for (int i = 1; i <= n; i++)
//     {
       
//         for (int j = min(i, k); j > 0; j--)
//             C[j] = C[j] + C[j - 1];
//     }
//     return C[k];
// }
 
void solve(){
    int n, k;
    cin >> n >> k;
    if ( n < k ) cout << binomialCoeff(k, n) * arr[n] % m << endl; 
    else cout << arr[k] << endl;
    
}


signed main(){  
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    factorial();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}