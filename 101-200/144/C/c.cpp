#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    ll powN = (ll)pow(N, 0.5);
    pair<ll, ll> ab = make_pair(1, N);
    bool flg = true;

    for (ll i = powN; flg && i >= 1; i--) {
        if (N % i == 0) {
            if (ab.first + ab.second >= i + N / i) {
                // 新しい約数の和が小さい
                ab = make_pair(i, N / i);
                flg = false;
            }
        }
    }

    // cout << powN << endl;
    // cout << ab.first << " " << ab.second << endl;
    ll ans = ab.first + ab.second - 2;
    cout << ans << endl;

    return 0;
}