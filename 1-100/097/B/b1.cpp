// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll X, x;
    cin >> X;

    ll mid = -1;
    for (ll i = 1; i <= X; i++) {
        if (X <= i * i) {
            mid = i;
            break;
        } else {
            // なにもしない
        }
    }

    ll ans = 1;
    ll x_prev = -1, mid_prev = -1;

    cout << "x:" << x << " mid:" << mid << " ans:" << ans << " init" << endl;
    for (ll i = X; i > 0; i--) {
        x = i;
        cout << "x:" << x << " mid:" << mid << " ans:" << ans << " w" << endl;
        while (x >= 1) {

            if (x % mid == 0 && x / mid == 1) {
                // 割り切れるかつ商が１　条件を満たす
                cout << "Answer:\t" << "x:" << x << " mid:" << mid << " ans:" << ans << endl;
                ans = max(i, ans);
                x = x / mid;
                break;
            } else if (mid == 1) {
                // looping
                ans = max(i, ans);
                break;
            } else if (x % mid == 0) {
                // 割り切れる 場合のみwhile続行
                x = x / mid;
            } else if (x < mid * mid) {
                cout << "\t mid^2:" << mid * mid << endl;
                // mid の二乗がXより大きい
                mid--;
                break;
            }
            x--;

            // if (mid > 30) {
            //         cout << "x:" << x << " mid:" << mid << " ans:" << ans
            //              << " diff" << endl;
            // }

            // if (x_prev != x || mid_prev != mid) {
            //     cout << "x:" << x << " mid:" << mid << " ans:" << ans << "
            //     diff"
            //          << endl;
            // }

            x_prev = x, mid_prev = mid;
        }
    }

    cout << ans << endl;
    cout << "out:" << endl;

    return 0;
}
