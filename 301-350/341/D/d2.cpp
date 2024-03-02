#include <iostream>
#include <numeric>

using namespace std;
using ll = long long;

int main() {
    ll N, M, K;
    cin >> N >> M >> K;

    ll X = std::lcm(N, M);

    // K のカウント
    ll flg_set = 0;
    for (ll i = 1; i < X; ++i) {
        if (i % N == 0 || i % M == 0) {
            ++flg_set;
        }
    }

    // setの個数
    ll set_num = K / flg_set;

    // cnt: K
    ll cnt = (int)(set_num * flg_set);
    // 　数
    ll num = set_num * X+1;

    // cout << "cnt:" << cnt << " flg_set:" << flg_set << " set_num:" << set_num << '\n';

    // cout << num << " " << X << " " << set_num << '\n';
    for (ll i = num; i < X+num; ++i) {
        if (i % N == 0 || i % M == 0) {
            ++cnt;
            ++num;
            // cout << "cnt:" << cnt << " num:" << num << '\n';
        }
        if (cnt == K)
            break;
    }

    cout << num << endl;

    return 0;
}
