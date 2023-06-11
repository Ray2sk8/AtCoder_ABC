// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string str;

int main() {

    cin >> str;

    int size = str.size();

    // 先頭がA
    if (str[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    // Cの条件
    int flgC = 0;
    int strC;
    for (int i = 3 - 1; i <= size - 2; i++) {
        if (str[i] == 'C') {
            ++flgC;
            strC = i;
        }
    }
    if (flgC != 1) {
        cout << "WA" << endl;
        return 0;
    }

    // 小文字
    for (int i = 0; i < size; i++) {
        if (i == 0 || i == strC){
            continue;
        }
        char chr = str[i];
        if ('a' <= chr && chr <= 'z') {

        } else {
            cout << "WA" << endl;
            return 0;
        }
    }

    cout << "AC" << endl;

    return 0;
}
