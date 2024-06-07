#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e8;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    int r = N;
    ll cnt = 0, res = 0;
    for (int i = 0; i < N; i++) {
        r = max(r, i + 1);
        while (r - 1 > i && A[r - 1] + A[i] >= MOD) {
            r--;
        }
        cnt += N - r;
        // cout << "cnt:" << cnt << endl;
    }

    for (int i = 0; i < N; i++) {
        res += A[i] * (N - 1);
    }
    res -= cnt * MOD;

    cout << res << endl;

    return 0;
}
