#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N;
    cin >> N;
    vector<pair<int, int>> p(N);

    for (auto &[x, y] : p) {
        cin >> x >> y;
    }

    // i:調べる
    // 探索する対象
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // if (i == j) { // 同一点除外
            //     continue;
            // }
            for (int k = j + 1; k < N; k++) { // 同一点除外
                // if (i == k || j == k) {
                //     continue;
                // }
                // 三点が同一直線状にあるのかどうか
                auto [x1, y1] = p[i];
                auto [x2, y2] = p[j];
                auto [x3, y3] = p[k];
                x1 -= x3;
                x2 -= x3;
                y1 -= y3;
                y2 -= y3;
                // cout << "i:" << i << " j:" << j << " k:" << k << endl;
                // cout << p[i].first << p[i].second << p[j].first <<
                // p[j].second
                //      << p[k].first << p[k].second << endl;
                if (x1 * y2 == x2 * y1) {
                    // cout << endl;
                    // cout << "i:" << i << " j:" << j << " k:" << k << endl;
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}