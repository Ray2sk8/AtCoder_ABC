#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll H, W;
// vector<vector<string>> s(100, vector<string>(100));

// vector<vector<string>> s[100];
vector<string> s(100);

// bool checkPC(char s, char s1) {

//     if (s == 'T' && s1 == 'T') {
//         return true;
//     }

//     return false;
// }

int main() {

    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        cin >> s[i];
    }
    // cout << s[0][3] << " " << int(s[0][3]) << endl;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W - 1; j++) {
            // cout << "i: " << i << " j: " << j << endl;
            // cout << "s: " << s[i][j] << " s1: " << s[i][j + 1] << endl;
            char s1 = s[i][j];
            char s2 = s[i][j + 1];
            if (s1 == 'T' && s2 == 'T') {
                // cout << " " << endl;
                // cout << "i: " << i << " j: " << j << endl;
                // cout << "s: " << s[i][j] << " s1: " << s[i][j + 1] << endl;
                s[i][j] = 'P';
                s[i][j + 1] = 'C';
            }
        }
    }

    for (int i = 0; i < H; i++) {
        cout << s[i] << endl;
    }

    return 0;
}