#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    ll ans;
    if (abs(A - B) % 2 == 0) {
        ans = abs(A - B) / 2;
    } else {
        ans = min( A-1, N-B ) + 1 + (B-A-1)/2  ; 
    }
    // cout << max(abs(1 - A), abs(1 - B)) << endl;
    // cout << max(abs(N - A), abs(N - B)) << endl;

    cout << ans << endl;

    return 0;
}