#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<pair<int, int>> st;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        st.insert({x, y});
    }
    int nx = 0, ny = 0;
    for (int i = 0; i < n; i++) {
        int dx = 0, dy = 0;
        if (s[i] == 'R')
            dx = 1;
        if (s[i] == 'L')
            dx = -1;
        if (s[i] == 'U')
            dy = 1;
        if (s[i] == 'D')
            dy = -1;
        nx += dx, ny += dy;
        if (--h < 0) {
            cout << "No\n";
            return 0;
        }
        if (h < k and st.count({nx, ny})) {
            h = k;
            st.erase({nx, ny});
        }
    }
    cout << "Yes\n";
}
