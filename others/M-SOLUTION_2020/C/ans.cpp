#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    ll N, K;
    cin >> N >> K;
    ll A[N + 1];
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    for (int i = K + 1; i <= N; i++) {
        if (A[i - K] < A[i])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
