#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<ll> A(N + 1);
    vector<ll> S(N + 1);
    vector<ll> T(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N - 1; i++) {
        cin >> S[i] >> T[i];
    }

    for (int i = 1; i <= N - 1; i++) {
        ll num = (ll)(A[i] / S[i]);
        A[i + 1] += T[i] * num;
    }

    cout << A[N] << endl;

    return 0;
}