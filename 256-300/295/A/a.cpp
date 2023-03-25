#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool match1(string s) {
    bool ret = false;
    if (!s.compare("and") || !s.compare("not") || !s.compare("that") ||
        !s.compare("the") || !s.compare("you")) {
        ret = true;
    } else {
        ret = false;
    }

    return ret;
}

int main() {
    ll N;
    cin >> N;
    vector<string> w(N);

    for (int i = 0; i < N; i++) {
        cin >> w[i];
    }

    for (int i = 0; i < N; i++) {
        if (match1(w[i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}