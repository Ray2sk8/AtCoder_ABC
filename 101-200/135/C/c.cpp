#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<int> A(N + 1);
    vector<int> B(N);

    for (int i = 0; i < N + 1; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    //
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        // i A >= B
        if (A[i] >= B[i]) {
            A[i] -= B[i];
            ans += B[i];
            B[i] = 0;
        } else {
            B[i] -= A[i];
            ans += A[i];
            A[i] = 0;
        }

        // i+1 : A >= B
        if (A[i + 1] >= B[i]) {
            A[i + 1] -= B[i];
            ans += B[i];
            B[i] = 0;
        } else {
            B[i] -= A[i + 1];
            ans += A[i + 1];
            A[i + 1] = 0;
        }
    }

    cout << ans << endl;

    return 0;
}