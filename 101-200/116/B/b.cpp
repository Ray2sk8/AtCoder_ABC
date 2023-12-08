// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;


vector<int> a(1 << 18, 0);

int fn(ll n) {
    ll ret;
    if (n % 2 == 0) {
        ret = n / 2;
    } else {
        ret = 3 * n + 1;
    }
    return ret;
}

int seekN(ll n){
    ll ret = 0;
    int a1 = a[n];
    for(int i=n-1; i>0; i--){
        if(a1 == a[i]){
            ret = i;
            break;
        }
    }

    return ret;
}


int main() {
    ll n;
    ll ans;
    cin >> n;
    a[1] = n;
    ll cnt = 2;
    bool ok = true;
    while (ok) {
        a[cnt] = fn(a[cnt-1]);//次の候の値
        ans = seekN(cnt);
        if( ans != 0 ){
            ans = cnt;
            break;
        } else {
            cnt++;
        }
    }

    cout << ans << endl;

    return 0;
}
