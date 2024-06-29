#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string s, c;
    cin >> s;
    c = s;
    c[0] = '0';

    for (int i = 1; i <= s.size(); i++) {
        c[i] = s[i - 1];
    }

    cout << c << endl;

    return 0;
}