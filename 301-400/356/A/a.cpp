#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, L, R;
    cin >> N >> L >> R;
    vector<int> v(N+1);
    for (int i = 1; i <= N; i++) {
        v[i] = i;
    }

    for (int i = 0; i <= ((R - L) / 2); i++) {
        int x;
        x = v[L + i];
        v[L + i] = v[R - i];
        v[R - i] = x;
    }

    for (int i = 1; i <= N; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}