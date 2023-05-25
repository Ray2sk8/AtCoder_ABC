/**
 * @file a.cpp
 * @author your name (you@domain.com)
 * @brief 同じ数字が３回以上と勘違い
 * @version 0.1
 * @date 2023-05-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    string str;
    cin >> N;
    str = to_string(N);

    map<char, int> mp;


    for (int i = 0; i < 4; i++) {
        mp[str[i]]++;
    }

    for (auto x : mp) {
        // cout << x.first << " " << x.second << endl;
        if (x.second >= 3) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}