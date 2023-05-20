#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


int x, y;
void solve(int n)
{
	if(n >= 10)solve(n/10);
	x*=10;
	y*=10;
//	cout << n % 10 / 2 << ' ' << (n % 10 + 1) / 2 << endl;
	x+=n%10/2;
	y+=(n%10+1)/2;
	if(n&1)	swap(x,y);
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
         x = 0, y = 0;
         int n;
         cin >> n;
         solve(n);
         cout  << x << " " << y << endl;
    }
    return 0;
}