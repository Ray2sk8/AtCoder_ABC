#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll H;
    cin >> H;
    ll test = H;
    ll cnt = 0;
    while(test != 1){
        test /= 2;
        cnt++;
    }
    cnt++;
    //cout << cnt << endl;

    ll ans = pow(2, cnt) - 1;

    cout << ans << endl;

    return 0;
}