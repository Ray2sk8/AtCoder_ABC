#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, K;
    cin >> N >> K;
    // tree height
    vector<int> tree(N);
    for (int i = 0; i < N; i++) {
        cin >> tree[i];
    }
    sort(tree.begin(), tree.end());
    ll ans = INFINITY;

    // show elements
    // for (int i = 0; i < N; i++) {
    //     cout << tree[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i <= N - K; i++) {
        ll diff = tree[i + K-1] - tree[i];
        // cout << "i:" << i << " diff:" << diff << endl;
        ans = min(ans, diff);
    }

    cout << ans << endl;

    return 0;
}