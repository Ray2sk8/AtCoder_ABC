// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    vector<bool> v(27, false);

    for (int i = 0; i < s.size(); i++) {
        int n = s[i] - 'a';
        if (v[n] == true) {
            cout << "no" << endl;
            return 0;
        } else {
            v[n] = true;
        }
    }
    cout << "yes" << endl;

    return 0;
}
