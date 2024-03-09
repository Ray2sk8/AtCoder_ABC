#include <numeric>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N, M, K;
    cin >> N >> M >> K;

    ll X = std::lcm(N, M);

    ll flg = 0;
    ll cnt = 1;
    while (true) {
        // 最小公倍数で割り切れない場合
        if (cnt % X != 0) {
            if (cnt % N == 0 || cnt % M == 0) {
                flg++;
            }
        }
        if (flg == K) {
            cout << cnt << endl;
            break;
        }
        cnt++;
    }

    return 0;
}
