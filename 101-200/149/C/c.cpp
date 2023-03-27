#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool pr(int n) {
    bool ret = true;

    if (n % 2 == 0 && n > 2) {
        // 2の倍数かつ2以上が素数でない
        ret = false;
    } else if (n > 2) {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                ret = false;
                break;
            }
        }
    }

    return ret;
}

int main() {
    ll N;
    cin >> N;
    int ans = N;

    while (1) {
        if (pr(ans)) {
            break;
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}