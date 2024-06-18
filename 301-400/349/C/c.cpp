#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[j]) {
            // cout << s[i] << " " << t[j] << endl;
            j++;
        }
    }

    if (j == 3) {
        cout << "Yes" << endl;
    } else if (j == 2 && t[2] == 'X') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}