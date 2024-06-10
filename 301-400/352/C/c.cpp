#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    // vector<ll> C(N);
    // vector<ll> D(N);

    ll sumA = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        sumA += A[i];
    }

    ll x = -1;
    for (int i = 0; i < N; i++) {
        ll y = -A[i] + B[i];
        if (y > x) {
            x = y;
        }
    }

    cout << sumA + x << endl;

    return 0;
}