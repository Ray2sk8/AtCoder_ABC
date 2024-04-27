#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> B;
    vector<int> C;

    ll cnt = 0;
    int x;
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (A[i] > A[j]) {
                // 交代
                x = A[i];
                A[i] = A[j];
                A[j] = x;

                B.push_back(i);
                C.push_back(j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    for (int i = 0; i < cnt; i++) {
        cout << B[i] << " " << C[i] << endl;
    }

    return 0;
}