#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int a,b,c,k;
	cin>>a>>b>>c>>k;
	for(int i=pow(10,a-1);i<pow(10,a);i++){
		int l=max(pow(10,b-1),pow(10,c-1)-i);
		int r=min(pow(10,b)-1,pow(10,c)-1-i);
		if(l>r) continue;
		int have=r-l+1;
		if(k<=have){
			cout<<i<<" + "<<l+k-1<<" = "<<i+l+k-1<<endl;
			return ;
		}
		k-=have;
	}
	cout<<-1<<endl;
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