#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll Q, H, S, D;
    cin >> Q >> H >> S >> D;
    ll N;
    cin >> N;

    ll ans = 0;

    int liq = 2;
    ans += (int)(N / liq) * D;
    N = N % liq;

    liq = 1;
    ans += (int)(N / liq) * S;
    N = N % liq;

    double n = 0.5;
    ans += (int)(N / n) * H;
    N = N % liq;

    n = 0.25;
    ans += (int)(N / n) * Q;
    N = N % liq;

    cout << ans << endl;

    return 0;
}