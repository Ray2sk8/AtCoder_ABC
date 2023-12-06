#include <bits/stdc++.h>

using namespace std;
using ll = long long;

/**
 * @brief i に対してのみ編集権を持つ
 *
 * @param f
 * @param l
 * @return int -1:fail,  0:success, 1:H[i]変更
 */
int Height_Judge(int f, int l) {
    int ret;

    if (f >= 1) {
        // i-1 のほうが小さい
        if (l >= 0) {
            // l = H[i+1] - H[i]
            // i+1 が十分大きい
            ret = 0;
        } else if (l == -1) {
            // i+1がiよりもー１小さい
            //  l = H[i+1] - H[i]
            //   H[i]-- 変更
            ret = 1;
        } else if (l < -1) {
            // iがi+1よりもとても大きい
            ret = -1;
        }
    } else if (f == 0) {
        // 前と同じ高さ
        if (l >= 0) {
            // l = H[i+1] - H[i]
            // 減らす必要がない
            ret = 0;
        } else {
            // i+1がiよりも小さい
            // iを減らさないといけない
            // 条件を満たさない
            ret = -1;
        }
    } else if (f <= -1) {
        // i-1 が大きい
        ret = -1;
    }

    return ret;
}

int main() {
    ll N;
    cin >> N;
    vector<ll> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    ll diff_f;
    ll diff_l;
    bool ans = true;
    for (int i = 0; N != 1 && i < N && ans == true; i++) {
        if (i == 0) {
            diff_l = H[1] - H[0];
            if (diff_l < -1) {
                // H[0] が大きい
                ans = false;
                break;
            } else if (diff_l == -1) {
                H[0]--;
            }
        } else if (i == N - 1) {
            // 一番最後
            diff_f = H[i] - H[i - 1];
            if (diff_f <= -1) {
                ans = false;
            }
        } else {
            // そのほか
            diff_f = H[i] - H[i - 1];
            diff_l = H[i + 1] - H[i];
            int hg = Height_Judge(diff_f, diff_l);
            if (hg == -1) {
                cout << "H[i-1]:" << H[i - 1] << " H[i]:" << H[i]
                     << " H[i+1]:" << H[i + 1] << endl;
                ans = false;
                break;
            } else if (hg == 1) {
                H[i]--;
            }
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}