#include <bits/stdc++.h>

using namespace std;
using ll = long long;

long long LCM(long long const A, long long const B) {
    ll a = A;
    ll b = B;
    while (a >= 1 and b >= 1) {
        if (a >= b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    // GCM(a,b)
    ll num_gcd;
    if (a != 0) {
        num_gcd = a;
    } else {
        num_gcd = b;
    }

    // LCM(a,b)
    ll lcm = A * B / num_gcd;

    // cout << "a:" << a << " b:" << b;
    // cout << " num_gcd:" << num_gcd << " lcm:" << lcm << endl;

    return lcm;
}

long long all_lcm(vector<ll> const A) {
    int size = A.size();
    ll ret = A[0];

    for (int i = 1; i < size; i++) {
        // cout << ret << " " << A[i] << " ";
        ret = LCM(ret, A[i]);
        // cout << ret << endl;
    }

    return ret;
}


int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll m = all_lcm(A);
    m--;

    cout << m << endl;

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ans += m % A[i];
    }

    cout << ans << endl;

    return 0;
}