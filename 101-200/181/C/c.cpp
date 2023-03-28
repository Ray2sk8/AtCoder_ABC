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
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            } else if ((x[i] == 0 || x[j] == 0) &&
                       (y[i] % y[j] == 0 || y[j] % y[i] == 0)) {
                ans++;
            } else if ((y[i] == 0 || y[j] == 0) &&
                       (x[i] % x[j] == 0 || x[j] % x[i] == 0)) {
                ans++;
            } else if ((x[i] % x[j] == 0 || x[j] % x[i] == 0) &&
                       (y[i] % y[j] == 0 || y[j] % y[i] == 0)) {
                ans++;
            }

            if (ans == 3) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    return 0;
}