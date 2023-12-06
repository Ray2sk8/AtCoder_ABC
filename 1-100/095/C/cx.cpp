#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    // AB pizza cost as A or B
    ll Cx2 = C * 2;
    // set discount
    bool setDiscount = false;
    if (Cx2 < (A + B)) {
        setDiscount = true;
    }
    // diff X Y
    ll diff_many = Y - X;
    // X bigger than Y
    bool XBigger = false;
    if (X > Y) {
        diff_many = -1 * diff_many;
        XBigger = true;
    }

    ll ans = 0;
    if (diff_many == 0) {
        // XYの差がない
        if (setDiscount == true) {
            // まとめ買いが安い
            ans += Cx2 * X;
            cout << "ans:" << ans << " set" << endl;
        } else {
            // 別々で買う
            ans += A * X + B * Y;
            cout << "ans:" << ans << " buy each" << endl;
        }
    } else if (XBigger == true) {
        // X が大きい
        if (setDiscount == true) {
            // まとめ買いが安い
            ans += Cx2 * (X - diff_many);
            cout << "ans:" << ans << " XsetDis" << endl;
        } else {
            // 別々で買う
            ans += A * (X - diff_many) + B * Y;
            cout << "ans:" << ans << " XsetDis false" << endl;
        }

        // 不足分を買う
        if (X > Cx2) {
            // ABピザの方が安い
            ans += Cx2 * diff_many;
            cout << "ans:" << ans << " ABcheaper" << endl;
        } else {
            ans += A * diff_many;
            cout << "ans:" << ans << " Acheaper" << endl;
        }

    } else {
        if (setDiscount == true) {
            // まとめ買いが安い
            ans += Cx2 * (Y - diff_many);
            cout << "ans:" << ans << " XsetDis" << endl;
        } else {
            // 別々で買う
            ans += A * X + B * (Y - diff_many);
            cout << "ans:" << ans << " XsetDis false" << endl;
        }

        // 不足分を買う
        if (B > Cx2) {
            // ABピザの方が安い
            ans += Cx2 * diff_many;
            cout << "ans:" << ans << " ABcheaper" << endl;
        } else {
            ans += B * diff_many;
            cout << "ans:" << ans << " Bcheaper" << endl;
        }
    }

    cout << ans << endl;
    return 0;
}