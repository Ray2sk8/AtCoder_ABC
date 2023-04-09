// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int k = -1, q = -1;
int r = -1, r1 = -1, b = -1, b1 = -1, n = -1, n1 = -1;

bool correct() {

    bool ret = false;

    if (b % 2 != b1 % 2 && r < k && k < r1) {
        ret = true;
    }

    return ret;
}

void seek(char chr, int i) {

    // cout << chr << " " << i << endl;
    switch (chr) {
    case 'K':
        k = i;
        break;
    case 'Q':
        q = i;
        break;
    case 'R':
        if (r == -1) {
            r = i;
        } else {
            r1 = i;
        }
        break;
    case 'B':
        if (b == -1) {
            b = i;
        } else {
            b1 = i;
        }
        break;
    case 'N':
        if (n == -1) {
            n = i;
        } else {
            n1 = i;
        }
        break;
    default:
        break;
    }

    return;
}

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < 8; i++) {
        seek(s[i], i);
    }

    // cout << q << endl;
    // cout << r << endl;
    // cout << "k:" << k << endl;
    // cout << r1 << endl;
    // cout << "b:" << b << endl;
    // cout << b1 << endl;
    // cout << n << endl;
    // cout << "n1:" << n1 << endl;
    if (correct()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
