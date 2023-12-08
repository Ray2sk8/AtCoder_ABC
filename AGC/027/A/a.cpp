#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, x;
    cin >> N >> x;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll ans = 0;
    ll i = 0;
    while (x >= 0) {
        if (x - a[i] >= 0 && i != N - 1) {
            // cout << "x:" << x << " a[i]" << a[i] << endl;
            ans++;
            x = x - a[i];
            i++;
        } else if (i == N - 1 && x - a[i] == 0) {
            //最後のこども
            ans++;
            break;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}