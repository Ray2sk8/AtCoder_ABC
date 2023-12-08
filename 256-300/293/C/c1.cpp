#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int H, W;
    cin >> H >> W;

    ll A[11][11];

    int l = H + W - 2;
    int throwTown = H + W - 1;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> A[i][j];
        }
    }

    int p[throwTown];
    for (int i = 1; i <= l; i++) {
        // p=1 下に行く
        if (i > W - 1)
            p[i] = 1;
        else
            p[i] = 0;
    }

    int ans = 0;
    // 経路探索
    do {
        int x = 1, y = 1;
        set<int> S;
        S.insert(A[1][1]);
        for (int i = 1; i <= l; i++) {
            if (p[i])
                y++;
            else
                x++;
            S.insert(A[x][y]);
        }

        // 重複無しのまちの数は求めている数か
        if ((int)(S.size()) == throwTown)
            ans++;
            
        // ここのnext_perm で0,1の列の全探索
    } while (next_permutation(p + 1, p + throwTown));

    cout << ans << endl;

    return 0;
}