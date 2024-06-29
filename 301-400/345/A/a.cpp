#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string str;
    cin >> str;
    bool ans = true;

    if (str[0] == '<' and str[str.size() - 1] == '>') {
        for (int i = 1; i < str.length() - 1; i++) {
            if (str[i] == '<' or str[i] == '>') {
                ans = false;
                break;
            }
        }
    } else {
        ans = false;
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}