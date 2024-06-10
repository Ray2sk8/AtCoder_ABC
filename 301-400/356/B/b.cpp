// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;

    // 必要な栄養素
    vector<int> A(M + 1);
    // i - x
    vector<vector<int>> X(N + 1, vector<int>(M + 1));
    // need
    vector<int> flg(M + 1, 0);

    for (int i = 1; i <= M; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> X[i][j];
            flg[j] += X[i][j];
        }
    }

    bool ok = true;
    for (int i = 1; i <= M; i++) {
        if (flg[i] < A[i]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
