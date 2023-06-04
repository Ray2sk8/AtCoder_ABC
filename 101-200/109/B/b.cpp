// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
vector<string> w(N);

bool matching(int N, string s) {

    for (int i = 0; i < N; i++) {
        if (s == w[i]) {
            return false;
        }
    }
    return true;
}

int main() {

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> w[i];
    }

    char start = w[0][0];
    bool ok = true;
    for (int i = 0; i < N; i++) {
        if (start == w[i][0]) {

            if (matching(i, w[i])) {

            } else {
                ok = false;
                break;
            }

            start = w[i][w[i].size() - 1];
        } else {
            ok = false;
            break;
        }
    }

    if(ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
