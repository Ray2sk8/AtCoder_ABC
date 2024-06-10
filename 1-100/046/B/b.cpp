// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N, K, R;
    cin >> N >> K;
    R = K - 1;
    ll ans = 1;
    bool flg = false;
    for (int i = 1; i <= N; i++) {
        if (flg) {
            ans *= R;
        } else {
            ans *= K;
            flg = !flg;
        }
    }

    cout << ans << endl;

    return 0;
}
