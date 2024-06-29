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
    ll ans = 0, cnt = 0;
    for (int i = 0; i < N - 1; i++) {
        r = max(r, i + 1);
        while (r - 1 > i && A[r - 1] + A[i] >= MOD) {
            r--;
        }
        cnt += N - r;
    }

    for (int i = 0; i < N; i++) {
        ans += A[i] * (N - 1);
    }
    ans -= cnt * MOD;

    cout << ans << endl;

    return 0;
}