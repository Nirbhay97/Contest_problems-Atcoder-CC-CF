#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        int x = 4294967295;
        if(n == 0)cout << 1 << " " << 2 << " " << 3 << " " << 3 << endl;
        else cout << 1 << " " << 2 << " " << x << " " << (x^n) ;
        
    }
            
	// your code goes here
	return 0;
}
