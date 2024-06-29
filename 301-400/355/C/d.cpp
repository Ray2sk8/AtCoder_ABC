#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<int> A(T);
    for (int i = 0; i < T; i++) {
        cin >> A[i];
        A[i]--;
    }

    vector<int> row(N, 0);
    vector<int> col(N, 0);
    vector<int> diag(2, 0);

    for (int i = 0; i < T; i++) {
        int x = A[i] / N;
        int y = A[i] % N;

        // 横
        row[x]++;
        if (row[x] == N) {
            cout << i + 1 << endl;
            return 0;
        }

        // 縦
        col[y]++;
        if (col[y] == N) {
            cout << i + 1 << endl;
            return 0;
        }

        // 左上 - 右下 方向の斜め
        if (x == y) {
            diag[0]++;
            if (diag[0] == N) {
                cout << i + 1 << endl;
                return 0;
            }
        }

        // 右上 - 左下 方向の斜め
        if (x + y == N - 1) {
            diag[1]++;
            if (diag[1] == N) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
