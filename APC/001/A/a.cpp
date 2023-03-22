#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X == Y) {
        cout << -1 << endl;
    } else {
        if (Y % X == 0 ) {
            cout << -1 << endl;
        } else {
            cout << X << endl;
        }
    }
}
