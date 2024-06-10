#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<vector<int>> A(2, vector<int>(N));
    vector<int> V(N, 0);
    V[0] = 1;
    sort(V.begin(), V.end());

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    int ans = -10;

    do {

        int tmp_ans = 0;
        int i = 0, j = 0;

        for (int k = 0; k < N; k++) {
            tmp_ans += A[i][j];
            if (V[k] == 1) {
                i++;
            } else if (V[k] == 0) {
                j++;
            }
        }
        tmp_ans += A[i][j];

        ans = max(ans, tmp_ans);
        // for (auto x : V) {
        //     cout << x << " ";
        // }
        // cout << endl;
        // cout << "ans:" << tmp_ans << endl;

    } while (next_permutation(V.begin(), V.end()));

    cout << ans << endl;

    return 0;
}