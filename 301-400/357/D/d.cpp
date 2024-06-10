#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll MOD = 998244353;

int main() {
    ll N;
    cin >> N;

    const ll X = N;

    ll size;
    for (int i = 1; i <= 20 && N > 0; i++) {
        N /= 10;
        size = i;
    }
    // cout << size << endl;

    ll kake = 1;
    for (int i = 1; i <= size; i++) {
        kake *= 10;
    }

    ll ans = X;
    for (int i = 1; i < X; i++) {
        if (ans >= MOD) {
            ans %= MOD;
            ans += X;
        } else {
            ans = ans * kake + X;
        }
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}