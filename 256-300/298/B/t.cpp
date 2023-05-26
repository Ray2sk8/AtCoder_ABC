// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    // int i, j;
    int n = 3;
    cin >> n;
    // cin >> n;
    // cin >> i >> j;
    // int v[4][4];
    // int w[4][4];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << n + 1 - i << "," << j << "  ";
        }  cout << endl;
    }
    return 0;
}
