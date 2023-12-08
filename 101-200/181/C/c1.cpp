#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    ll ans = 0;
    // i:調べる
    // 探索する対象
    for (int i = 0; i < N; i++) {
        ans = 0;
        for (int j = i; j < N; j++) {
            if (i == j) { // 同一点除外
                continue;
            }
            for (int k = j; k < N; k++) { // 同一点除外
                if (i == k || j == k) {
                    continue;
                }
                int l, r;
                //三点が同一直線状にあるのかどうか
                l = (y[k] - y[i]) * (x[j] - x[i]);
                r = (y[k] - y[i]) * (x[k] - x[i]);
                if (l == r) {
                    ans++;
                }
            }
            if (ans) {
                cout << "Yes" << endl;
                return 0;
            }
            ans = 0;
        }
    }
    cout << "No" << endl;
    return 0;
}