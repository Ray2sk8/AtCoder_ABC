// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n, m, x;
    cin >> n >> m >> x;
    vector<int> a(n+1, false);
    for (int i = 0; i < m; i++) {
        ll c;
        cin >> c;
        a[c] = true;
    }
    ll cntM = 0, cnt0 = 0;

    for (int i = x; i <= n; i++) {
        if (a[i] == true) {
            cntM++;
        }
    }

    for (int i = x; i >= 0; i--) {
        if (a[i] == true) {
            cnt0++;
        }
    }

    cout << min(cnt0, cntM) << endl;

    return 0;
}
