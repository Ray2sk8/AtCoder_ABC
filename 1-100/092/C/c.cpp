#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll sum = 0;

int main() {
    ll N;

    cin >> N;
    vector<int> a(N + 100, 0);

    for (int i = 1; i <= N; i++) {
        cin >> a[i];
        sum += abs(a[i] - a[i - 1]); // 合計値を代入
    }
    sum += abs(a[N]); // 最後の要素の値を代入

    for (int i = 1; i <= N; i++) {
        cout << sum - abs(a[i] - a[i - 1]) - abs(a[i + 1] - a[i]) +
                    abs(a[i + 1] - a[i - 1])
             << endl;
    }

    return 0;
}