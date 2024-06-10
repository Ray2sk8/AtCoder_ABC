// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string str = "wbwbwwbwbwbw";

int cw[12 + 1];
int cb[12 + 1];

int main() {
    int w, b;
    cin >> w >> b;

    // string wb = want_str(w, b);

    int x = 0, y = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'w') {
            x++;
        } else if (str[i] == 'b') {
            y++;
        }
        cw[i + 1] = x;
        cb[i + 1] = y;
    }

    string base = "";
    int num = max(w / 7, b / 5) + 5;
    for (int i = 1; i <= num; i++) {
        base += str;
    }

    int cnt_w = 0, cnt_b = 0;

    // for (int i = 0; i < base.size(); i++) {
    //     if (base[i] == 'w') {
    //         cnt_w++;
    //     } else if (base[i] == 'b') {
    //         cnt_b++;
    //     }
    //     if (cnt_w == w && cnt_b == b) {
    //         cout << "Yes" << endl;
    //         return 0;
    //     }
    //     if (cnt_w >= w && cnt_b >= b) {
    //         for (int j = 0; j < base.size(); j++) {
    //             if (base[i] == 'w') {
    //                 cnt_w--;
    //             } else if (base[i] == 'b') {
    //                 cnt_b--;
    //             }
    //             if (cnt_w == w && cnt_b == b) {
    //                 cout << "Yes" << endl;
    //                 return 0;
    //             }
    //         }
    //     }
    // }


    for (int i = base.size() - 1; i >= 0; i--) {
        cnt_w = 0;
        cnt_b = 0;
        for (int j = 0; j <= i; j++) {
            switch (base[j]) {
            case 'w':
                cnt_w++;
                break;
            case 'b':
                cnt_b++;
                break;
            }
            if (cnt_w == w && cnt_b == b) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
