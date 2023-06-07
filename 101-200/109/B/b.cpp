// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;

int main() {
    cin >> N;
    vector<string> w(N);
    for (int i = 0; i < N; i++) {
        cin >> w[i];
    }

    char start = w[0][w[0].size() - 1];
    bool ok = true;
    for (int i = 1; i < N && ok == true; i++) {
        if (start == w[i][0]) {
            for (int j = 0; j < i; j++) {
                if (w[i] == w[j]) {
                    ok = false;
                    break;
                }
            }
            start = w[i][ w[i].size() - 1];
        } else {
            ok = false;
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
