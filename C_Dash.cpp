#include <iostream>
#include <vector>
#include <map>
#define ing long long
using namespace std;

signed main() {
    int N, M, H, K;
    cin >> N >> M >> H >> K;

    string S;
    cin >> S;

    map<pair<int, int>, bool> items;
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        items[make_pair(x, y)] = true;
    }

    int currX = 0, currY = 0;
    int i = 0;
    for (; i < N; i++) {
        if (H == 0 and i < N - 1) {
            cout << "No" << endl;
            return 0;
        }
        cout << currX << " " <<currY << H << endl;
       

        if (S[i] == 'R') {
            currX++;
            H--;
        } else if (S[i] == 'L') {
            currX--;
            H--;
        } else if (S[i] == 'U') {
            currY++;
            H--;
        } else if (S[i] == 'D') {
            currY--;
            H--;
        }
         if (items.count({currX, currY}) && H < K) {
            H = K;
        }
        
    }

    // cout << currX << "  "<< currY << "  " << H;
    if (H >= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
