// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;

    ll cnt;
    cnt = N / (A + B) * A;

    ll x;
    x = N % (A + B);

    if(x > A){
        cnt += A;
    } else {
        cnt += x;
    }

    cout << cnt << endl;

    return 0;
}
