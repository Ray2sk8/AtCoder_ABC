#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll pow2(ll N) {
    ll ret = 1;

    for (ll i = 1; i <= N; i++) {
        ret *= 2;
    }

    return ret;
}

int main() {
    ll X, Y;
    cin >> X >> Y;

    ll ans;

    for (ll i = 1;; i++) {
        ll ret = X * pow2(i);
        if (ret > Y) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}