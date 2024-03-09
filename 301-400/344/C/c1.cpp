#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N, M, L;
    cin >> N;
    ll A[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    cin >> M;
    ll B[M + 1];
    for (int i = 1; i <= M; i++) {
        cin >> B[i];
    }

    cin >> L;
    ll C[L + 1];
    for (int i = 1; i <= L; i++) {
        cin >> C[i];
    }

    ll box[N * M * L];
    ll cnt = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            for (int k = 1; k <= L; k++) {
                box[cnt] = A[i] + B[j] + C[k];
                cnt++;
            }
        }
    }

    ll Q;
    cin >> Q;
    ll X[Q + 1];
    vector<bool> ans(Q + 1, false);
    for (int i = 1; i <= Q; i++) {
        cin >> X[i];
        for (int j = 1; j <= N * M * L; j++) {
            if (box[j] == X[i]) {
                ans[i] = true;
            }
        }
    }

    for (int i = 1; i <= Q; i++) {
        if (ans[i] == true) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}