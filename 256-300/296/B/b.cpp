// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    // vector<vector<string>> s(8, vector<string>(8));

    string s[8];

    for (int i = 0; i < 8; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < 8 ; i++) {
        for (int j = 0; j < 8; j++) {
            if (s[i][j] == '*') {
                char sa = 'a' + j;
                int x = 8 - i;
                cout << sa << x << endl;
                return 0;
            }
        }
    }

    return 0;
}
