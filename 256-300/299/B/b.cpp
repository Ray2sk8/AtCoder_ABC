// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int N;

int T;

int main() {
    cin >> N >> T;
    int num = -1;
    vector<int> C(N + 1);
    vector<int> R(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }

    for (int i = 1; i <= N; i++) {
        cin >> R[i];
    }

    int T_r = -1;
    // 色がTを探索　１－N
    for (int i = 1; i <= N; i++) {
        if (T == C[i]) {
            if (R[i] > T_r) {
                T_r = R[i];
                num = i;
            }
        }
    }

    // ないときは色１と同じ色で最大
    if (num == -1) {
        num = 1;
        int R_num = R[1];
        for (int i = 2; i <= N; i++) {
            if (C[i] == C[1]) {
                if (R[i] > R_num) {
                    // 最大値更新
                    R_num = R[i];
                    num = i;
                }
            }
        }
    }

    cout << num << endl;

    return 0;
}
