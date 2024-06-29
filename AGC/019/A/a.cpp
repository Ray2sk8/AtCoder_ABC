#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    pair<double, ll> Q;
    pair<double, ll> H;
    pair<double, ll> S;
    pair<double, ll> D;

    int x;
    cin >> x;
    Q = make_pair(0.25, x);

    cin >> x;
    H = make_pair(0.5, x);

    cin >> x;
    S = make_pair(1, x);

    cin >> x;
    D = make_pair(2, x);

    ll N;
    cin >> N;

    ll ans = 0;
    ans += (N/2)*min(8*Q.second, min(4*H.second, min(2*S.second, D.second)));
    ans += (N%2)*min(4*Q.second, min(2*H.second, S.second));

    cout << ans << endl;

    return 0;
}