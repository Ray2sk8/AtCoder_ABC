#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// 商品の個数管理
vector<int> v(6);

int main() {
    ll N;
    cin >> N;
    ll sum = 0;

    //二千円以上はいける
    if (N >= 2000) {
        cout << 1 << endl;
        return 0;
    }

    ll N_l2 = N % 100;
    for (int i = 5; i > 0; i--) {
        v[i] = N_l2 / i;
        N_l2 = N_l2 % i;
        sum += v[i] * (100 + i);
        // cout << "sum =" << sum << " i:" << i << " v[i]:" << v[i];
        // cout << " N_l2 =" << N_l2 << endl;
    }

    ll rice = N - sum;
    if (rice < 0) {
        // 今の合計値がNを超える マイナスのになる
        cout << 0 << endl;
        return 0;
    } else {
        v[0] = rice / 100;
        sum += 100 * v[0];
    }

    if (sum == N) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}