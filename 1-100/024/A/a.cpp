#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e18;

int main() {

    ll A, B, C, K;
    ll a, b, c;
    cin >> A >> B >> C >> K;

    for (int i = 0; i < K; i++) {
        a = B + C;
        b = C + A;
        c = A + B;
        // if (a > INF || b > INF || c > INF) {
        //     cout << "Unfair" << endl;
        //     return 0;
        // }
        A = 0;
        B = b - a;
        C = c - a;
    }
    if (abs(A - B) > INF) {
        cout << "Unfair" << endl;
    } else {
        cout << A - B << endl;
    }
    return 0;
}