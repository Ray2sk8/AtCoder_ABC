#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

const ll max_value = LONG_LONG_MAX;

int main() {

    ll N, M;
    cin >> N >> M;

    ll A[N], B[N];
    vector<pair<ll, ll>> V(N);
    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> B[i];
        V[i - 1] = make_pair(A[i], B[i]);
    }

    sort(V.begin(), V.end());

    int cnt = 0;
    ll ans = 0;

    // for (auto x : V) {
    //     cout << x.first << " " << x.second << endl;
    // }

    while (M > 0) {
        int num;
        if (M > V[cnt].second) {
            num = V[cnt].second;
        } else {
            num = M;
        }
        M -= num;
        ans += V[cnt].first * num;
        // cnt increment
        cnt++;
    }

    cout << ans << endl;

    return 0;
}