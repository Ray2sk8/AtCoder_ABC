// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<int> P(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> P[i];
    }

    int Q;
    cin >> Q;

    vector<int> A(Q + 1);
    vector<int> B(Q + 1);

    for (int i = 1; i <= Q; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 1; i <= Q; i++) {
        int x, y;
        x = find(P.begin() + 1, P.begin() + N + 1, A[i]) - P.begin();
        y = find(P.begin() + 1, P.begin() + N + 1, B[i]) - P.begin();

        if (x < y) {
            cout << A[i] << endl;
        } else {
            cout << B[i] << endl;
        }
    }

    return 0;
}
