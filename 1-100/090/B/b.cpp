// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll A, B;
ll x;

int kaibun() {
    ll a = A;
    cout << "a:" << a << " " << A << endl;
    ll x = a / 1000;

    x = (x % 10)*10 +(x / 10) % 10;//

    a = A/100;
    a = a*100 + x;
    if (a >= A) {
        //cout << x << " " << a << " " << A << endl;
        A = a;
        return 1;
    }
    A = a;
    return 0;
}

int main() {
    cin >> A >> B;

    ll ans = 0;

    while (A < B) {
        if (kaibun()) {
            ans++;
        }
        A += 100;
    }

    cout << ans << endl;

    return 0;
}
