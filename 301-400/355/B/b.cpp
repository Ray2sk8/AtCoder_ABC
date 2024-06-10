// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    int n = A.size();

    int a = A[0];
    for (int i = 1; i < n; i++) {
        if (a + 1 == A[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
