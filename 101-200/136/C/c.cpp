#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    bool ans = true;
    for (int i = N - 2; ans && i >= 0; i--) {
        if (h[i] > h[i + 1] + 1) {
            // 左が右よりも１以上大きい
            ans = false;
        } else if (h[i] == h[i + 1] + 1) {
            // 右のマスより１だけ大きい
            h[i]--;
        } // else if( h[i] <= h[i+1] )
        // 左が右よりも小さい
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}