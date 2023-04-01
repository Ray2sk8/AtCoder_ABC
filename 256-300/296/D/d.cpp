#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main() {
    ull ans, N, M;
    ull preAns = 1e11 + 100;
    cin >> N >> M;

    ull half = sqrt(M);
    // cout << half << endl;
    bool ok = true;
    bool num = false;
    pair<ull, ull> p;
    // preAns = 1e10 + 100;

    for (ull i = half; i >= 1 && ok == true; i--) {
        for (ull j = half; j <= N && ok == true; j++) {
            ans = i * j;
            if (ans >= M) {
                num = true;
                // cout << "i:" << i << " j:" << j << " preAns:" << preAns << endl;
                // cout << "pass ans:" << ans << endl;
                if (ans < preAns) {
                    // 前の値よりも小さい,いけるかも
                    p.first = i;
                    p.second = j;
                    preAns = ans;
                } else if (ans > preAns) {
                    // 前の値よりも大き　期待できない
                    ok = false;
                    break;
                }
                preAns = ans;
            } else if (ans < M) {
                ull x = i*N;
                if(x < M){
                    break;
                }
                // ok = false;
                //  ans = min(p.first*p.second, ans);
                // break;
            }
        }
    }

    if (!num)
        cout << -1 << endl;
    else
        cout << preAns << endl;

    return 0;
}
