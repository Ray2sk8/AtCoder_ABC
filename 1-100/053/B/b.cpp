// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    string str;
    cin >> str;

    int n = str.size();
    int flg = 0;
    int cnt = 0;
    int cntMax = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'A') {
            cnt++;
            flg = 1;
        } else if (str[i] == 'Z') {
            if (flg == 1) {
                cnt++;
                cntMax = max(cnt, cntMax);
            }
        } else if(flg == 1) {
            cnt++;
        }

        // cout << str[i] << " " << cnt << " " << cntMax << endl;
    }

    cout << cntMax << endl;

    return 0;
}
