#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    // ABを無駄なく使う　ABを使わない　ABのみで支払う
    ll ans = 0, ans1 = 0, ans2 = 0;

    // AB pizza, A pizza, B pizza
    ans = C * 2 * min(X, Y);
    //不足分を買う
    if (X > Y) {
        ans += A * (X - Y);
    } else {
        ans += B * (Y - X);
    }

    //Not AB pizza
    ans1 = A*X + B*Y;

    //only AB pizza
    ans2 = C*2*max(X, Y);

    cout << min(ans, min(ans1, ans2)) << endl;

    return 0;
}