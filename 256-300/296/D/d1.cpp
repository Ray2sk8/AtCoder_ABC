#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
    cout << fixed << setprecision(20);
    ll N, M;
    cin >> N >> M;

    ll ans = INF;
    // a <= b としても一般性を失わない
    // このときa <= √M まで全探索すれば良い
    for (ll a = 1; a <= N; a++) {
        // このときbはceil(M / a)
        ll b = ceil(M / a);
        // ll x = a * b;
        // cout << "a:" << a << " b:" << b << " x:" << x << endl;
        for (int j = b; j <= N; j++) {
            ll x = a * j;
            // cout << "a:" << a << " b:" << b << " x:" << x << endl;
            if (x > ans) {
                break;
            }
            if (a <= N && b <= N && x >= M) {
                // cout << "A:" << a << " b:" << b << " x:" << x << endl;
                ans = min(ans, x);
            } else if (b < a) {
                break;
            }
        }
    }

    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}