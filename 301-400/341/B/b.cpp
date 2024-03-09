// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    ll A[N+1];
    ll S[N+1];
    ll T[N+1];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < N; i++) {
        cin >> S[i] >> T[i];
    }


    for (int i = 1; i < N; i++) {
        ll num = A[i] / S[i];
        A[i] %= S[i];
        A[i + 1] += num * T[i];
    }
    


    // int cnt = 1;
    // while (1) {
    //     // cout << cnt << " ";
    //     // 回数
    //     int num = A[cnt] / S[cnt];
    //     A[cnt] = A[cnt] % S[cnt];
    //     // 通貨交換する
    //     int next_cnt = cnt + 1;
    //     A[next_cnt] += num * T[cnt];
    //     // カウントアップ
    //     cnt++;
    //     if (cnt == N) {
    //         break;
    //     }
    // }


    // cout << endl;
    // cout << " A " << endl;
    // for (int i = 1; i <= N; i++) {
    //     cout << A[i] << " ";
    // }
    // cout << endl;
    // cout << endl;
    // for (int i = 1; i < N; i++) {
    //     cout << S[i] << " " << T[i] << "\n";
    // }

    cout << A[N] << "\n";

    return 0;
}
