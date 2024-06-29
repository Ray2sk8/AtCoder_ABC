// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, M;
    cin >> N;
    vector<string> S(N + 1);
    vector<string> C(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }
    C = S;
    unique(C.begin() + 1, C.end());

    // cout << count(S.begin() + 1, S.end(), "apple");

    cin >> M;
    vector<string> T(M + 1);
    for (int i = 1; i <= M; i++) {
        cin >> T[i];
    }

    // for (int i = 0; i < C.size(); i++) {
    //     cout << C[i] << " : ";
    // }
    // cout << endl;

    vector<int> cnt(N + 1, 0);
    for (int i = 0; i <= C.size(); i++) {
        cnt[i] += count(S.begin() + 1, S.end(), C[i]);
        cnt[i] -= count(T.begin() + 1, T.end(), C[i]);
    }

    int ans = 0;
    for (int i = 0; i < C.size(); i++) {
        ans = max(ans, cnt[i]);
    }

    cout << ans << endl;

    return 0;
}
