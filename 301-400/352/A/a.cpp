#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;

    int x = min(X, Y);
    int y = max(X, Y);

    if (x <= Z && Z <= y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}