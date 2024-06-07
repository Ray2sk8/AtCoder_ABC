#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, T;
    cin >> N >> T;

    vector<vector<bool>> bg(N, vector<bool>(N, false));
    vector<int> A(T + 1);
    for (int i = 1; i <= T; i++) {
        cin >> A[i];
        A[i]--;
    }

    // x
    vector<int> check_x(N, 0);
    vector<int> check_y(N, 0);
    vector<int> check_cross(2, 0);
    int cnt = 0;
    for (int i = 1; i <= T; i++) {
        int x = A[i] / N;
        int y = A[i] % N;

        // Bingoの穴をあける
        check_x[x]++;
        check_y[y]++;
        if (x == y) {
            check_cross[0]++;
        }
        if (x + y == N - 1) {
            check_cross[1]++;
        }

        // Bingoチェック
        if (check_x[x] == N) {
            cnt = i;
            break;
        } else if (check_y[y] == N) {
            cnt = i;
            break;
        } else if (check_cross[0] == N) {
            cnt = i;
            break;
        } else if (check_cross[1] == N) {
            cnt = i;
            break;
        }
    }

    if (cnt != 0) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}