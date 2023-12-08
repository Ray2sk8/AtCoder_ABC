#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int main(void) {
    int h, w;
    int a[11][11];

    // 入力
    cin >> h >> w;
    for (int y = 1; y <= h; y++)
        for (int x = 1; x <= w; x++)
            cin >> a[x][y];

    // path
    int p[20], l = h + w - 2, ans = 0;
    for (int i = 1; i <= l; i++) {
        if (i > w - 1)
            p[i] = 1;
        else
            p[i] = 0;
    }

    // 経路探索
    do {
        int x = 1, y = 1;
        set<int> S;
        S.insert(a[1][1]);
        //cout << "a[1][1]:" << a[1][1] << endl;
        for (int i = 1; i <= l; i++) {
            if (p[i])
                y++;
            else
                x++;
            S.insert(a[x][y]);
        }
        // cout << "s.size():" << S.size() << endl;
        if (S.size() == l + 1)
            ans++;
        // cout << "p+1" << p + 1 << "  P+l+1" << p + l + 1 << endl;
    } while (next_permutation(p + 1, p + l + 1)); // 配列は[1]スタート

    cout << ans << endl;
    return 0;
}
