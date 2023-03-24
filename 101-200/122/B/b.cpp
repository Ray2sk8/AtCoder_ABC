// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool acgt(char s) {
    bool ret = false;
    switch (s) {
    case 'A':
    case 'C':
    case 'G':
    case 'T':
        ret = true;
        break;

    default:
        break;
    }

    return ret;
}

int main() {
    string str;
    cin >> str;

    int i = 0;
    ll count = 0;
    ll maxCnt = 0;
    while (str[i] != '\0') {
        // cout << i << ": " << str[i] << endl;
        if (acgt(str[i]) == true) {
            count++;
        } else {
            maxCnt = max(maxCnt, count);
            count = 0;
        }
        i++;
    }
    maxCnt = max(maxCnt, count);

    cout << maxCnt << endl;

    return 0;
}
