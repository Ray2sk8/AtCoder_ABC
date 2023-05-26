#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    string s;
    cin >> N >> s;
    int flg_P = -1;
    int flg_P1 = 0;
    int flg_k = 0;

    for (int i = 0; i < N; i++) {
        switch (s[i]) {
        case '|':
            if (flg_P == -1) {
                flg_P = i;
                // cout << "Flg_P:" << flg_P << endl;
            } else {
                flg_P1 = i;
                // cout << "Flg_P1:" << flg_P1 << endl;
            }

            break;
        case '*':
            flg_k = i;
            // cout << "Flg_k:" << flg_k << endl;
            break;
        default:
            break;
        }
    }

    if (flg_P < flg_k && flg_k < flg_P1) {
        cout << "in" << endl;
    } else {
        cout << "out" << endl;
    }

    return 0;
}