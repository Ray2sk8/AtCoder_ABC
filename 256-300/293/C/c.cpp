#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int H, W;
vector<vector<int>> A(H + 1, vector<int>(W + 1));

bool search_right(int h, int w) {

    bool ret = false;
    // たてがない
    if (w <= W - 1) {
        ret = true;
    }

    return ret;
}

bool search_down(int h, int w) {
    bool ret = false;
    // 横がない
    if (h <= H - 1) {
        ret = true;
    }

    return ret;
}

int main() {

    // Initialize

    cin >> H >> W;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> A[i][j];
        }
    }

    // 視点と終点
    int start_P = A.at(1).at(1);
    int end_P = A.at(H + 1).at(W + 1);

    bool ok = true;
    int h = 1;
    int w = 1;
    while (ok) {

        if (search_right(h, w)) {
            if (A.at(h).at(w) != A.at(h).at(w + 1)) {
                w++;
            } else {
                break; 
            }
        } else if (search_down(h, w)) {
            if (A.at(h).at(w) != A.at(h + 1).at(w)) {
                h++;
            }
        } else {
            ok = false;
        }
    }

    cout << endl;

    return 0;
}