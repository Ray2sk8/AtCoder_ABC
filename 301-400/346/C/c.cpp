#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N, K;
    cin >> N >> K;

    vector<ll> A(N);
    ll sumA = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());

    for (auto x : A) {
        // cout << x << endl;
        if (x <= K) {
            sumA += x;
        }
    }
    // cout << sumA << endl;

    ll sum = (1 + K) * K / 2;

    sum -= sumA;

    cout << sum << endl;

    return 0;
}