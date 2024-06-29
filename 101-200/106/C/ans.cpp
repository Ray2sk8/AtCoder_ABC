#include <bits/stdc++.h>

using namespace std;
using ll = long long;

unsigned long long gosen = 5 * 1e15;

string S;
ll K;
//---------------------------------------------------------------------------------------------------
int solve() {
    K--;
    fore(c, S) {
        if (c == '1') {
            if (K == 0)
                return 1;
            else
                K--;
        } else
            return c - '0';
    }
}
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> S >> K;
    cout << solve() << endl;
}