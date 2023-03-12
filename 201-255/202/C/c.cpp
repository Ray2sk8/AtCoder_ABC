#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, ans = 0;
    cin >> N;
    vector<int> A(N + 1);
    vector<int> B(N + 1);
    vector<int> C(N + 1);
    // 入力
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> B[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (A.at(i) == B.at(C.at(j))) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}