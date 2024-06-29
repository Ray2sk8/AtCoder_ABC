#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, Q;
    cin >> N >> Q;

    vector<bool> A(N + 1, true);

    vector<int> T(Q + 1);
    for (int i = 1; i <= Q; i++) {
        cin >> T[i];
    }

    //
    for (int i = 1; i <= Q; i++) {
        int n = T[i];

        A[n] = !A[n];
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (A[i] == true) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}