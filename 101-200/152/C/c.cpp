#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int minV = maxV;
const int maxV = 1e7;
ll N;
vector<int> vec(1e6);


int main() {

    cin >> N;
    ll ans=0;
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
        // 小さい値を更新
        minV = min(vec[i], minV);
        if(minV == vec[i]) {
            ans++;
        }
    }
    // cout << minV << endl;

    // ll ans = 0;

    // for (int i = 0; i < N; i++) {
    //     if(minV == vec[i]) {
    //         ans++;
    //     }
    // }

    cout << ans << endl;

    return 0;
}
