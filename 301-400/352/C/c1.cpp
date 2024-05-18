#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    vector<ll> C(N);
    vector<ll> D(N);

    ll sumA = 0;
    ll sumB = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        sumA += A[i];
        sumB += B[i];
    }

    C = A;
    // D = B;
    sort(C.begin(), C.end());
    // sort(B.begin(), B.end());
    ll a = C[0];
    // int b = B[0];

    ll b = -1;
    int num = -1;
    for (int i = 0; i < N; i++) {
        if (A[i] == a) {
            if (B[i] > b) {
                b = B[i];
                num = i;
            }
        }
    }

    ll ans;
    ans = sumA - A[num] + B[num];

    cout << ans << endl;

    return 0;
}