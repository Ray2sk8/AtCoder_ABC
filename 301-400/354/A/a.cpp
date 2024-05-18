#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll H;
    ll N = 0, p = 1;

    cin >> H;

    int i;
    for (i = 0;; i++) {
        if (N > H) {
            break;
        }
        if (i >= 1) {
            p *= 2;
        }
        N += p;
    }

    cout << i << endl;

    return 0;
}