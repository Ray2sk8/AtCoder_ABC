#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, K;
    cin >> N >> K;

    vector<int> p(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> p[i];
    }

    if (K == 1) {
        cout << 0 << endl;
        return 0;
    }

    // 部分数列の添字の組み合わせを生成するためのビットマスクを使う
    vector<int> bitmask(N,0);
    iota(bitmask.begin(), bitmask.begin() + K, 1);
    // bitmask[0] = 1, bitmask[1] = 2, ..., bitmask[K-1] = K
    int ans = INT_MAX;

    do {
        int min_diff = INT_MAX;
        for (int i = 0; i < K; i++) {
            min_diff = min(min_diff, p[bitmask[i]] - bitmask[i]);
        }

        ans = min(ans, min_diff);
    } while (next_permutation(bitmask.begin(), bitmask.begin() + K));

    cout << ans << endl;

    return 0;
}