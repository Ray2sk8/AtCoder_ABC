#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF (long long)2e+18

int main() {
    long long n, m, x, ans = INF;
    cin >> n >> m;

    // a <= b としても一般性を失わない
    // このときa <= √M まで全探索すれば良い
    for (ll a = 1; a <= m; a++) {
        // このときbはceil(M / a)
        // cout << "m-1+a:\t" << m-1+a << " ";
        ll b = ceil(( m-1+a )/ a);
        x = a * b;
        // cout << "  a:" << a << " b:" << b ;//<< endl;
        // cout << " x:" << x <<endl;
        if (a <= n && b <= n && x >= m) {
            ans = min(ans, x);
        } else if(a > b){
            break;
        }
    }

    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}
