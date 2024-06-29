// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mod = 1e9 + 7;

int main() {

    ll N;
    cin >> N;

    ll ans = 1;

    for (int i = 1; i <= N; i++) {
        ans *= i;
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}
