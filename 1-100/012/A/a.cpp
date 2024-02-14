#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;

    vector<ll> a(N * 3);

    for (int i = 0; i < N * 3; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // for (int i = 0; i < N*3; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    ll ans = 0;
    for (int i = N*3-2 ; i >= N; i -= 2) {
        // cout << "i:" << i << " a:" << a[i] << endl;
        ans += a[i];
    }

    cout << ans << endl;

    return 0;
}