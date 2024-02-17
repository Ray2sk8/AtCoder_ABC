#include <iostream>
#include <numeric>

using namespace std;
using ll = long long;

int main() {
    ll N, M, K;
    cin >> N >> M >> K;

    ll X = std::lcm(N, M);

    ll flg_set = 0;
    for (ll i = 1; i < X; ++i) {
        if (i % N == 0 || i % M == 0) {
            ++flg_set;
        }
    }

    // setの個数
    ll set_num = K / flg_set;

    // cnt: flg
    ll cnt = set_num * flg_set;
    // 　数
    ll num = set_num * X;

    for (ll i = 1+num; i <= X; ++i) {
        if (i % N == 0 || i % M == 0) {
            ++cnt;
            ++num;
        }
        if (cnt == K)
            break;
    }

    cout << num << endl;

    return 0;
}
