#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    // 各予定の日数を読み込み、必要に応じて A+B で割った余りを計算する
    vector<ll> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
        d[i] %= (a + b);
        if (d[i] == 0)
            d[i] = a + b;
    }

    // 予定の日数を重複を除いて昇順にソートする
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());

    ll si = d.size();
    // 最後の予定と最初の予定の差が A 以下であれば Yes を出力
    if (d[si - 1] - d[0] + 1 <= a) {
        cout << "Yes" << endl;
    } else {
        // 隣接する予定の間の差が B よりも大きく、かつ直前の予定が A
        // よりも小さい場合、Yes を出力
        for (int i = 1; i < si; ++i) {
            if (d[i] - d[i - 1] > b && d[i - 1] <= a) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl; // 上記の条件を満たさない場合は No を出力
    }

    return 0;
}
