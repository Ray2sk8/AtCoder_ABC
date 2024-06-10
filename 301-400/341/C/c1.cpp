#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll H, W, N;
    cin >> H >> W >> N;

    string T;
    cin >> T;

    // debug print
    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    ll T_size = T.size();

    cout << T <<" "<< T_size << endl;
    // for (int i = 1; i < H-1; i++) {
    //     cout << S[i] << endl;
    // }

    int ans = 0;
    for (int i = 1; i < H - 1; i++) {
        for (int j = 1; j < W - 1; j++) {
            char now_pos = S[i][j];
            if (now_pos == '.') {
                // 座標
                int pos_h = i;
                int pos_w = j;
                // 指令を受け取る
                for (int k = 0; k < T_size; k++) {
                    switch (T[k]) {
                    case 'L':
                        pos_w--;
                        break;
                    case 'R':
                        pos_w++;
                        break;
                    case 'U':
                        pos_h++;
                        break;
                    case 'D':
                        pos_h--;
                        break;
                    }
                    // 　海の時条件を満たさない
                    if (S[pos_h][pos_w] == '#') {
                        break;
                    } else if (k == T_size-1) {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}