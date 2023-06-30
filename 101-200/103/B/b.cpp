// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string pullBack(string s) {
    string ret;

    ret += s[s.size() - 1];
    for (int i = 0; i < s.size() - 1; i++) {
        ret += s[i];
    }
    return ret;
}

int main() {
    string s, t;
    cin >> s >> t;
    // reverse(s.begin(),s.end());

    int strSize = s.size();
    bool ans = false;
    for (int i = 0; i < strSize; i++) {
        if (s == t) {
            ans = true;
            break;
        } else {
            s = pullBack(s);
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
