#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int solve(int a, int b) {

    int cnt = 0;
    while (!(a == 0 && b == 0)) {
        if (a != 0 && b != 0) {
            // どっちもマイナス
            a++;
            b++;
            cnt++;
        } else if (a == 0) {
            b += 2;
            cnt++;
        } else if (b == 0) {
            a += 2;
            cnt++;
        }
    }

    return cnt;
}

int cornor(int a, int b) {
    int cnt = 0;

    if (a < b) {
        cnt = abs(b) - 1;
        a += abs(b) - 1;
        cnt += abs(a) / 2;
    } else {
        cnt = abs(a) - 1;
        b += abs(a) - 1;
        cnt += abs(b) / 2;
    }

    cnt += 2;

    // cout << a << " " << b << endl;

    return cnt;
}

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    int max_num = max(max(A, B), C);

    int a, b;
    int ans;
    if (A == max_num) {
        a = B;
        b = C;
    } else if (B == max_num) {
        a = A;
        b = C;
    } else if (C == max_num) {
        a = A;
        b = B;
    }
    a -= max_num;
    b -= max_num;

    if ((a % 2 != b % 2)) {
        ans = cornor(a, b);
    } else {
        ans = solve(a, b);
    }

    cout << ans << endl;

    return 0;
}