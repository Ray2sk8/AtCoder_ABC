#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll H, W;
// vector<vector<string>> g(H + 1, vector<string>(W + 1));

int main() {

    cin >> H >> W;
    vector<string> g(H + 1);
    vector<vector<bool>> gFlg(H, vector<bool>(W, false));

    for (int i = 0; i < H; i++) {
        cin >> g[i];
    }

    // cout << "xy" << endl;
    int x = 0, y = 0;
    int px = x, py = y;
    bool ok = true;
    gFlg[x][y] = true;
    // ll i = 1;
    do {
        char s = g[x][y];
        // cout << x << "  " << y <<  endl;
        // cout << "char:" << s << endl;
        // cout << endl;
        switch ( s ) {
        case 'D':
            x++;
            break;
        case 'U':
            x--;
            break;
        case 'R':
            y++;
            break;
        case 'L':
            y--;
            break;
        }
        // cout << "swi" << endl;
        // cout << x << "  " << y << endl;

        // 外に出る
        if (x < 0 || H <= x || y < 0 || W <= y) {
            ok = false;
            // cout << "range out" << endl;
            // cout << x << "  " << y << endl;
            break;
        } else if (gFlg[x][y] == false) {
            gFlg[x][y] = true;
        } else if (gFlg[x][y] == true) {
            // 周回する
            ok = false;
            cout << -1 << endl;
            return 0;
        }

        // cout << "i:" << i << endl;
        // i++;
        px = x;
        py = y;
    } while (ok);

    // cout << "end:";
    cout << px+1 << " " << py+1 << endl;
    return 0;
}