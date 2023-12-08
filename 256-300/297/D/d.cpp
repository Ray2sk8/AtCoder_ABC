#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll A, B, cnt = 0;

long long countAB() {
    ll ret;

    if (A > B) {

        if (B == 1) {
            ret = A / B;
            ret--;
            A = 1;
        } else {
            ret = A / B;
            A = A % B;
        }
    }
    return ret;
}

int main() {
    cin >> A >> B;
    swap(A, B);

    while (1) {
        if (A == B) {
            break;
        }
        // cout << A << " " << B << " " << cnt << endl;
        cnt += countAB();
        swap(A, B);
    }

    cout << cnt << endl;

    return 0;
}