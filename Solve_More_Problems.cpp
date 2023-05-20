#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        if(n == 0)cout << 1 << " " << 2 << " " << 3 << " " << 3;
        else{
            cout << 1 << " " << 2 << " " << 4294967295 << " " << 4294967295 ^ n << endl;
        }
        //else cout << 1 << " " << 2 << " " << 
    }
            
	// your code goes here
	return 0;
}
