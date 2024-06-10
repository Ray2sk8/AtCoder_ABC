// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string str;
    cin >> str;
    int size = str.size();
    int sm = 0, la = 0;

    for (int i = 0; i < size; i++) {
        char a = str[i];
        if ('a' <= a && a <= 'z') {
            sm++;
        } else if ('A' <= a && a <= 'Z') {
            la++;
        }
    }

    int cnv = 32;
    bool flg = false;
    if (sm > la) {
        // 小文字に変換
        flg = true;
    }

    if (flg) {
        // 小文字に変換
        for (int i = 0; i < size; i++) {
            char a = str[i];
            if ('A' <= a && a <= 'Z') {
                str[i] = a + cnv;
            }
        }
    } else {
        // 大文字に変換
        for (int i = 0; i < size; i++) {
            char a = str[i];
            if ('a' <= a && a <= 'z') {
                str[i] = a - cnv;
            }
        }
    }

    cout << str << endl;

    return 0;
}
