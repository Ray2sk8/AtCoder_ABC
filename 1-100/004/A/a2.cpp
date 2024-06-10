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

    sort(V.begin(), V.end());

    A = V[0];
    B = V[1];
    C = V[2];

    // for (auto x : V) {
    //     cout << x << endl;
    // }

    ll ans;
    if (B % 2 == 0) {
        ans = 0;
    } else {
        ans = A;
    }

    ans *= C;

    cout << ans << endl;

    return 0;
}