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

    vector<int> v(N, 0);
    for (int i = 0; i < K; i++) {
        v[i] = 1;
    }
    sort(v.begin(), v.end());

    int ans = 1e6;
    do {
        vector<int> num;
        for (int i = 0; i < N; i++) {
            if (v[i] == 1) {
                num.push_back(i + 1);
                break;
            }
        }
        for (int i = N - 1; i >= 0; i--) {
            if (v[i] == 1) {
                num.push_back(i + 1);
                break;
            }
        }

        // int pre = -1;
        bool flg = false;
        // P の候補
        if (p[num[1]] - p[num[0]] == K - 1) {
            flg = true;
        }

        if (flg) {
            int n = abs(num[1] - num[0]);
            ans = min(ans, n);
        }

    } while (next_permutation(v.begin(), v.end()));

    cout << ans << endl;

    return 0;
}