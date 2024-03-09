#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll N, M, H, K;
string s;
// vector<vector<int>> xy(3e5, vector<int>(3e5, 0));

map<ll, bool> xp;
map<ll, bool> yp;

int main() {

    cin >> N >> M >> H >> K;
    cin >> s;

    for (int i = 1; i <= M; i++) {
        int a[3];
        for (int j = 1; j <= 2; j++) {
            cin >> a[j];
        }
        xp[a[1]] = true;
        yp[a[2]] = true;
    }

    int hp = H;
    int x = 0, y = 0;
    bool ok = true;
    for (int i = 0; i < N; i++) {
        hp--;
        if (hp < 0) {
            ok = false;
            break;
        }
        if (s[i] == 'R') {
            x++;
        } else if (s[i] == 'D') {
            y--;
        } else if (s[i] == 'L') {
            x--;
        } else if (s[i] == 'U') {
            y++;
        }
        cout << hp << " " << x << " " << y << endl;
        // アイテムの座標かつhpがK未満
        if (hp < K && xp[x] == true && yp[y] == true) {
            cout << "cure" << endl;
            hp = K;
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}