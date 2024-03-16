#include <iostream>
#include <numeric>

using namespace std;
using ll = long long;

ll N, M, K, lcmX;

ll cntK(ll num) {
    ll ret;

    ret = (ll)(num / N) + (ll)(num / M) - (ll)(num / lcmX) * 2;

    return ret;
}

int main() {

    cin >> N >> M >> K;

    lcmX = (N * M) / gcd(N, M);

    ll l = 1;
    ll r = 1e18 + 10;

    while ((l + 1) < r) {
        ll mid = (l + r) / 2;
        ll num = cntK(mid);
        // cout << mid << " " << num << endl;
        if (num >= K) {
            // Kより大きい
            r = mid;
        } else {
            //
            l = mid;
        }
    }

    cout << r << endl;

    return 0;
}
