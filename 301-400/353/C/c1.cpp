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

    int r = 0;
    ll cnt = 0;
    for (int i = 0; i < N; i++) {
        r = max(r - 1, i + 1);

        while (r < N && A[r] + A[i] < MOD) {
            r++;
        }
        cnt += N - r;
    }

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ans += ll(A[i]) * (N - 1);
    }
    ans -= cnt * MOD;

    cout << ans << endl;

    return 0;
}