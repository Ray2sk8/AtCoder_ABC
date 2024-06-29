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
    cw[0] = cw[12];
    cb[0] = cb[12];

    string base = "";
    int num = max(w / 7, b / 5) + 3;
    for (int i = 1; i <= num; i++) {
        base += str;
    }

    int cnt_w = 0, cnt_b = 0;
    for (int i = base.size() - 1; i >= 0; i--) {
        int set = i / 12;
        int num = i % 12;
        cnt_w = set * 7 + cw[num];
        cnt_b = set * 5 + cb[num];

        for (int j = 0; j <= i; j++) {
            switch (base[j]) {
            case 'w':
                cnt_w--;
                break;
            case 'b':
                cnt_b--;
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
