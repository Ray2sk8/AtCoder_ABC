#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N, M, ans = LLONG_MAX;
    cin >> N >> M;

    for (ll i = 1; i <= N; i++) {
        ll b = (M + i - 1) / i;
        ll X = i * b;
        // cout << "i:" << i << " b:" << b << " x:" << X << endl;
        if (b <= N || X < M) {
            if (X >= M) {
                ans = min(ans, X);
                // cout << "i:" << i << " b:" << b << " x:" << X << endl;
            }
        }

        // a < b で考える
        if(i > b){
            break;
        }
    }

    // cout << LLONG_MAX << endl;
    if (ans == LLONG_MAX) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}

/**
 * @brief 切り上げ
 *
 * https://daeudaeu.com/kurisuke_kiriage_shisyagonyu/
 *
 */