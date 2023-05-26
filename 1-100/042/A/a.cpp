#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    vector<int> v(3);
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        int s;
        cin >> s;
        v[i] = s;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++) {
       // cout << v[i] << endl;
        if (i < 2 && v[i] == 5) {
            ans++;
        } else if (i == 2 && v[i] == 7) {
            ans++;
        }
    }

    if (ans == 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}