// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll threepower(int x) {
    ll ret = 1;

    for (int i = 1; i <= x; i++) {
        ret *= 3;
    }

    return ret;
}

int main() {

    int N;
    cin >> N;
    int A[N];
    int B[N];
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        if (A[i] % 2 == 0) {
            B[i] = 2;
        } else {
            B[i] = 1;
        }
    }

    ll ans;
    ans = threepower(N);

    ll dec = 1;
    for (int i = 1; i <= N; i++) {
        dec *= B[i];
    }

    ans -= dec;

    cout << ans << endl;

    return 0;
}
