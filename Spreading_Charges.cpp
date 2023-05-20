#include <bits/stdc++.h>
using namespace std;

void function1(){
    
    int n; string s;
    cin >> n >> s; 
    int res = 0,flag = 0,counter = 0;
    for(int k = 0; k < n; k++) if(s[k] != '0') counter = 1;
    if(counter == 0){
        cout << n << endl;
        return;
    }
    int k = 0;
    while(k < n){
        
        int m = k + 1;
        if(s[k] != '0'){
            int nare = 0;
            flag = s[k] == '+'?1:-1;
            while(m < n and s[m] == '0') nare++,m++; 
            if(m < n and s[m] == '+' and flag == -1){
                if(nare % 2 == 1){
                   res++, flag = 1;
                }
                k = m;
            }else if(s[m] == '-' and flag == 1){
                if(nare % 2 == 1){
                   res++, flag = 1;
                }
                k = m;
            }else k = m;
        }else k += 1;
    }

    cout << res << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--)function1();
    return 0;
}