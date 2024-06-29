#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll A, B, C;
    cin >> A >> B >> C;

    vector<ll> V;
    V.push_back(A);
    V.push_back(B);
    V.push_back(C);

    for (auto x : V) {
        if (x % 2 == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    ll ans = min({A * B, B * C, C * A});

    cout << ans << endl;

    return 0;
}