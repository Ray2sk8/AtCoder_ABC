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

    ll ans = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            ans = ans + (A[i] + A[j]) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}