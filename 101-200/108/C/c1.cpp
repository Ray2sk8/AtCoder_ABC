#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int sizeP(int x, int y, int z) {
    int ret = -1e4;
    if (x == y && y == z) {
        // ALL same
        ret = 1;
    } else if (x == y && x != z) {
        // Z diff
        ret = 3;
    } else if (x == z && x != y) {
        // y Diff
        ret = 3;
    } else if (x != y && y == z) {
        // x diff
        ret = 3;
    } else if (x != y && y != z && z != x) {
        // ALL Diff
        ret = 6;
    }

    return ret;
}

int main() {
    ll N, K;
    cin >> N >> K;
    ll cnt = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            if ((i + j) % K != 0) {
                // i,j の和がKでない
                continue;
            }
            for (int k = j; k <= N; k++) {
                if ((k + j) % K != 0 || (k + i) % K != 0) {
                    // k,j の和がKでない
                    continue;
                }
                vector<int> v = {i, j, k};
                // int a = v[0] + v[1]; // a+b
                // int b = v[2] + v[1]; // c+b
                // int c = v[2] + v[0]; // c+a
                if (2 * (v[0] + v[1] + v[2]) % K != 0) {
                    // 条件を満たさない組み合わせ　break;
                    continue;
                } else // if (a % K == 0 && b % K == 0 && c % K == 0)
                {
                    // 詳しく見る
                    int sizeT = sizeP(v[0], v[1], v[2]);
                    // cout << "v[0]" << v[0] << " v[1]" << v[1] << " v[2]" << v[2]
                    //      << " size:" << sizeT << endl;
                    cnt += sizeT;

                    // break;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}