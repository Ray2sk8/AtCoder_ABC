// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, A;
    cin >> N >> A;
    vector<ll> T(N + 1, 0);
    vector<ll> sum(N + 1, 0);

    sum[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> T[i];
    }
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            sum[i] = T[i] + A;
        } else {
            if (sum[i - 1] > T[i]) {
                sum[i] += sum[i - 1] + A;
            } else {                // すぐにできる時
                sum[i] += T[i] + A; // 帰る時間
            }
        }
        cout << sum[i] << endl;
    }

    return 0;
}
