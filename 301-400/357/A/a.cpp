#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, M;

    cin >> N >> M;

    vector<int> H(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> H[i];
    }

    int ans;
    for (int i = 1; i <= N; i++) {
        M -= H[i];
        if (M == 0) {
            //ちょうど使い切った
            ans = i;
            break;
        } else if (M < 0) {
            // なくなった
            ans = i-1;
            break;
        }
        // 最後かつあまった
        if (i == N  && M >= 0) {
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}