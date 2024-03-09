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

    set<pair<int, int>> st;

    for (int i = 1; i <= M; i++) {
        int a[3];
        for (int j = 1; j <= 2; j++) {
            cin >> a[j];
        }
        st.insert({a[1], a[2]});
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
        // cout << hp << " " << x << " " << y << endl;
        // アイテムの座標かつhpがK未満
        if (hp < K && st.count({x, y})) {
            // cout << "cure" << endl;
            hp = K;
            st.erase({x, y});
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}