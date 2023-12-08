// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

map<char, int> mp;

int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != '\0') {
        mp[s[i]]++;
        i++;
    }

    
    for (auto p : mp) {
        //cout << "former:" << p.first << " 2nd:" << p.second % 2 << endl;
        if (p.second%2 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    // while (s[i] != '\0') {
    //     if (mp[s[i]] % 2 != 0) { // 奇数の時
    //         cout << "No" << endl;
    //         return 0;
    //     }
    //     i++;
    // }

    cout << "Yes" << endl;

    return 0;
}
