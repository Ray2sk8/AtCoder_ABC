// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    string str;
    cin >> N;
    str = to_string(N);

    int flg = 0;
    int MaxFlg = 0;
    char pre = str[0];

    for (int i = 0; i < 4; i++) {
        if (str[i] == pre) {
            flg++;
        } else {
            MaxFlg = max(MaxFlg, flg);
            flg = 1;
        }
        pre = str[i];
    }
    MaxFlg = max(MaxFlg, flg);

    if (MaxFlg >= 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
