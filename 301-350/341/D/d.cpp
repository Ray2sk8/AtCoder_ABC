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
    // r:条件を満たす
    ll r = 1e20;
    ll mid;
    while (l < r) {
        mid = (l + r) / 2;

        if (cntK(mid) >= K) {
            r = mid;
        }
        //  else if (cntK(mid) == K) {
        //     r = mid;
        //     break;
        // }
        else {
            l = mid + 1;
        }
    }


    cout << r << endl;

    return 0;
}
