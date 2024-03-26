#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string N;
    cin >> N;

    ll N_size = N.size();

    ll cnt = 0;

    for (int i = 0; i < N_size; i++) {
        if (N[i] == '0') {
            cnt++;
        } else {
            cnt--;
        }
    }

    ll ans = N_size - abs(cnt);
    // ans /= 2;

    cout << ans << endl;

    return 0;
}