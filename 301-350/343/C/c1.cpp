#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool kaibun(string str) {
    bool ret = true;

    int len = str.size();

    for (int i = 0; i < len; i++) {
        if (str[i] != str[len - 1 - i]) {
            ret = false;
            break;
        }
    }

    return ret;
}

bool is_OK(ll num) {
    bool ret = false;

    string str = to_string(num);

    if (str.size() == 1) {
        ret = true;
    } else {
        if (kaibun(str)) {
            ret = true;
        }
    }

    return ret;
}

int main() {

    ll N;
    cin >> N;
    ll l = 1, r = 1e6;

    // cout << is_OK(N) << endl;

    ll ans = 1;

    while (l < r-1) {
        ll mid = (r - l) / 2 + l;
        // 三乗
        ll mid3 = pow(mid, 3);
        cout << "mid:" << mid << " ";
        if (N < mid3) {
            // 条件を満たさない三乗
            r = mid;
        } else {
            // 三乗は N 以下である
            if (is_OK(mid3)) {
                // 回文である
                l = mid;
                ans = mid3;
            } else {
                // 回文でない
                l = mid;
            }
        }
        cout << "l:" << l << " ans:" << ans;
        cout << " r:" << r << endl;
    }

    cout << ans << endl;

    return 0;
}