#include <bits/stdc++.h>
using namespace std;
int n, m;
int p[100][100];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> p[i][j];
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            //外ふたつは隣り合う組の列挙
            bool flag = 0;
            for (int k = 1; k <= m; k++) {
                for (int l = 1; l < n; l++) {
                    //pの中に連番であうのがあるのかどうか
                    if (p[k][l] == i && p[k][l + 1] == j ||
                        p[k][l] == j && p[k][l + 1] == i) {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 0)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}