#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> p(M + 1);
    vector<string> s(M + 1);

    // AC,WA
    vector<vector<ll>> Ans_cnt(N + 1, vector<ll>(2, 0));

    // input AC or WA
    for (int i = 0; i < M; i++) {
        cin >> p[i] >> s[i];
    }

    ll AC_cnt = 0, WA_cnt = 0;

    for (int i = 0; i < M; i++) {
        if (s[i] == "AC") {
            // 正解の時
            // if (Ans_cnt[p[i]][1] == 0) {
            //     //AC 初回
            // }
            Ans_cnt[p[i]][1] = 1; // 正解フラグ
        } else if (s[i] == "WA") {
            // 不正解の時
            if (Ans_cnt[p[i]][1] == 0) {
                // ACがまだ出てない　ー＞　ペナルティ
                Ans_cnt[p[i]][0] += 1;
            }
            // 正解が出てる
            // 何もしない
        }
    }

    // 集計
    // cout << "shukei" << endl;
    for (int i = 1; i <= N; i++) {
        if (Ans_cnt[i][1] == 1) {
            //正解が出ているとき
            AC_cnt++;
            WA_cnt += Ans_cnt[i][0];
        } else {
            // 不正解のみの時
        }
    }

    cout << AC_cnt << " " << WA_cnt << endl;

    return 0;
}