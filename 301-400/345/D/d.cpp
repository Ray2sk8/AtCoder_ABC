#include <iostream>
#include <vector>

using namespace std;

bool canCover(vector<vector<int>>& grid, vector<pair<int, int>>& tiles, int h, int w, int n) {
    vector<vector<bool>> visited(h, vector<bool>(w, false));

    for (int tileIdx = 0; tileIdx < n; ++tileIdx) {
        int a = tiles[tileIdx].first;
        int b = tiles[tileIdx].second;

        bool found = false;
        for (int i = 0; i < h && !found; ++i) {
            for (int j = 0; j < w && !found; ++j) {
                if (!visited[i][j] && i + a <= h && j + b <= w) {
                    bool canPlace = true;
                    for (int x = i; x < i + a && canPlace; ++x) {
                        for (int y = j; y < j + b; ++y) {
                            if (grid[x][y] == 1) {
                                canPlace = false;
                                break;
                            }
                        }
                    }

                    if (canPlace) {
                        for (int x = i; x < i + a; ++x) {
                            for (int y = j; y < j + b; ++y) {
                                visited[x][y] = true;
                            }
                        }
                        found = true;
                    }
                }
            }
        }

        if (!found) {
            return false;
        }
    }

    return true;
}

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<vector<int>> grid(h, vector<int>(w, 0));
    vector<pair<int, int>> tiles(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        tiles[i] = {a, b};
    }

    if (canCover(grid, tiles, h, w, n)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
