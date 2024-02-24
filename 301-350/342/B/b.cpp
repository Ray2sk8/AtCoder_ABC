// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<int> P(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    ll Q;
    cin >> Q;

    vector<int> A(Q, 0);
    vector<int> B(Q, 0);

    for (int i = 0; i < Q; i++) {
        cin >> A[i] >> B[i];
    }

    // i: A,B
    for (int i = 0; i < Q; i++) {
        int cnt_A = -1;
        int cnt_B = -1;
        // j: P,N
        for (int j = 0; j < N; j++) {
            if (A[i] == P[j]) {
                cnt_A = j;
            } else if (B[i] == P[j]) {
                cnt_B = j;
            }
            if (cnt_A != -1 && cnt_B != -1 ) {
                cout << P[min(cnt_A, cnt_B)] << endl;
                break;
            }
        }
    }

    return 0;
}
