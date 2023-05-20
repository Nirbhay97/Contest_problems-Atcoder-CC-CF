#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValid(int x, int y, int H, int W) {
    return (x >= 0 && x < H && y >= 0 && y < W);
}

bool isContiguous(vector<string>& grid, int x, int y, int dx, int dy, string word) {
    int len = word.length();
    for (int i = 0; i < len; i++) {
        if (!isValid(x, y, grid.size(), grid[0].length()) || grid[x][y] != word[i])
            return false;
        x += dx;
        y += dy;
    }
    return true;
}

void findPositions(vector<string>& grid) {
    int H = grid.size();
    int W = grid[0].length();

    vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};
    string target = "snuke";

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            for (int k = 0; k < 8; k++) {
                int x = i;
                int y = j;
                if (isContiguous(grid, x, y, dx[k], dy[k], target)) {
                    cout << x+1 << " " << y+1 << endl;
                    for (int l = 0; l < target.length()-1; l++) {
                        x += dx[k];
                        y += dy[k];
                        cout << x+1 << " " << y+1 << endl;
                    }
                    return;
                }
            }
        }
    }
}

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    findPositions(grid);

    return 0;
}

