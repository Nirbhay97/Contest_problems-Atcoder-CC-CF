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

    string s;
    cin >> s;

    int req = 0, teamA = 0, teamB = 0;
    string teama = "", teamb = "";

    for(int i = 0; i < (int)s.size(); i++)
        if(i % 2 == 1) teamb += s[i];
        else teama += s[i];

    for(int i = 0; i < 10; i++){

        if(teama[i] == '1')teamA++;
        if(teamb[i] == '1')teamB++;
        if(i == 9 and teamA == teamB){
            cout << "TIE" << endl;
            break;
        } 

        if(i < 4){
            
            int diff = abs(teamA - teamB);
            int mx = (5 - i + 1);

            if(teamA > teamB and diff > mx){
                cout << "TEAM-A" << " ";
                if(i%2) cout << 2*i + 1;
                else cout << 2*(i + 1);
                cout << endl;
                break;
            }else if(teamA < teamB and diff > mx){
                cout << "TEAM-B" << " ";
                if(i%2) cout << 2*i + 1;
                else cout << 2*(i + 1);
                cout << endl;
                break;
            }
           
           
        }
        else if(i == 4){
            if(teamA > teamB){
                cout << "TEAM-A" << " ";
                cout << 2*(i + 1) << endl;
                break;
            }else if(teamA < teamB){
                cout << "TEAM-B" << " ";
                cout << 2*(i + 1) << endl;
                break;
            }
        }
        else{

            if(teamA > teamB){
                cout << "TEAM-A" << " ";
                if(i%2) cout << 2*(i + 1);
                else cout << 2*i + 1;
                cout << endl;
                break;
            }else if(teamA < teamB){
                cout << "TEAM-B" << " ";
                if(i%2) cout << 2*(i + 1);
                else cout << 2*i + 1;
                cout << endl;
                break;
            }
            
        }
                 
    }
    
    
    
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    solve();
    return 0;
}