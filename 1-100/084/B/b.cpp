// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    string s;
    int a, b;
    cin >> a >> b;
    cin >> s;

    bool ok = true;
    for (int i = 0; i < a + b + 1; i++) {
        if (i != a) {
            // ハイフンでないとき
            int x = s[i] - '0';
            // cout << " " << s[i] << " x:" << x << endl;
            if (x < 0 || 9 < x) {
                ok = false;
                break;
            }
        } else if (s[a] == '-') {
            ok = true;
        } else {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

