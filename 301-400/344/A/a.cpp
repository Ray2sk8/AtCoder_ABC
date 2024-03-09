#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string str;
    string ans;

    cin >> str;
    bool skip = false;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '|') {
            skip = !skip;
        }
        if (skip != true) {
            if (str[i] != '|')
                ans += str[i];
        }
    }

    cout << ans << endl;

    return 0;
}