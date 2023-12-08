#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, X;
    map<int, int> mp;
    cin >> N >> X;
    vector<int> vx(N);
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        mp[x] = -10;
        vx[i] = x;
    }

    sort(vx.begin(), vx.end());
    if (vx[N - 1] - vx[0] < X) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        int a = vx[i] + X; // 求める値
        if (mp[a] == -10) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}