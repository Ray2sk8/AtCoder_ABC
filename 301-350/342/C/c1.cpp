#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N, Q;
    string s;
    cin >> N;
    cin >> s;
    cin >> Q;

    char c[Q + 1];
    char d[Q + 1];

    for (int i = 1; i <= Q; i++) {
        cin >> c[i] >> d[i];
    }

    for (int i = 1; i <= Q; i++) {
        for (int j = 0; j < N; j++) {
            if (c[i] == s[j]) {
                s[j] = d[i];
            }
        }
    }

    cout << s << endl;

    return 0;
}