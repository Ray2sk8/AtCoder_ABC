// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

long long fsum(ll a, ll b) {
    ll ret;

    ret = (a + b) * (b - a + 1) / 2;

    return ret;
}

int main() {
    ll N;
    cin >> N;
    vector<pair<ll, ll>> p(N);

    for (auto &[a, b] : p) {
        cin >> a >> b;
    }

    ll sum = 0;
    for (auto &[a, b] : p) {
        sum += fsum(a,b);
    }
    cout << sum << endl;
    return 0;
}
