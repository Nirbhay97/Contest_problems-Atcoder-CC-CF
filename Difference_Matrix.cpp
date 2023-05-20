#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        int arr[n][n];
        int odd = 1;
        int even = 2;
        for(int i = 0; i < n; i++){
            for(int j = 0;  j < n; j++){
                if(odd <= n*n){
                    arr[i][j] = odd;
                    odd += 2;
                }else{
                    arr[i][j] = even;
                    even += 2;
                }
                
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    
	// your code goes here
	return 0;
}
