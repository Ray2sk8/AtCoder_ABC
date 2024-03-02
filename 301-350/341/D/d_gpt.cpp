#include <iostream>
#include <numeric>

using namespace std;
using ll = long long;

ll N, M, K, lcmX;

// num以下のNとMのうちちょうど一方のみで割り切れる数の個数を数える関数
ll cntK(ll num) {
    // Nで割り切れる数の個数 + Mで割り切れる数の個数 - NとMの最小公倍数で割り切れる数の個数
    ll ret = (ll)(num / N) + (ll)(num / M) - (ll)(num / lcmX) * 2;
    return ret;
}

int main() {
    cin >> N >> M >> K;

    // NとMの最小公倍数を計算
    lcmX = (N * M) / gcd(N, M);

    ll l = 1;
    ll r = 1e18; // 十分大きな値を設定（1e8では不十分）
    ll mid;
    while (l < r) {
        mid = (l + r) / 2;

        if (cntK(mid) >= K) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << r << endl;

    return 0;
}
