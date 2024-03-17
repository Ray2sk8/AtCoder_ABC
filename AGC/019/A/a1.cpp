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

    // N 合計リットル
    double N;
    cin >> N;

    int cnt[4];
    for (int i = 0; i < 4; i++) {
        cnt[i] = 0;
    }
    
    cnt[3] = (int)(N / D.first);
    N -= D.second * cnt[3];

    cnt[2] = (int)(N / S.first);
    N -= S.second * cnt[2];

    cnt[1] = (int)(N / H.first);
    N -= H.second * cnt[1];

    cnt[0] = (int)(N / Q.first);
    N -= Q.second * cnt[0];

    for (auto x : cnt) {
        cout << x << " ";
    }
    cout << endl;

    ll ans;
    ans = cnt[0] * Q.second + cnt[1] * H.second + cnt[2] * S.second +
          cnt[3] * D.second;

    cout << ans << endl;

    return 0;
}