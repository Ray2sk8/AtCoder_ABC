#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int plus_minus(char op, int n) {
    int ret = n;

    if (op == '+') {
        ret = n;
    } else if (op == '-') {
        ret = -n;
    }
    return ret;
}

int main() {

    string str;
    cin >> str;
    int A = str[0] - '0', B = str[1] - '0', C = str[2] - '0', D = str[3] - '0';

    string op = "+-";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                int ans = A;
                ans += plus_minus(op[i], B);
                ans += plus_minus(op[j], C);
                ans += plus_minus(op[k], D);
                if (ans == 7) {
                    cout << A << op[i] << B << op[j] << C << op[k] << D << "="
                         << 7 << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
