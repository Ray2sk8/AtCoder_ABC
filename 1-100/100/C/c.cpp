#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll maxN = 10'000 + 10;
ll A[maxN];
ll N;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    ll cnt = 0;
    for (int i = 1; i <= N; i++) {
        // 何回２で割れるか
        for (int j = 1;; j++) {
            ll div = pow(2, j);
            if (A[i] % div == 0) {
                cnt++;
            } else {
                break;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}