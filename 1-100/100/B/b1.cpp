// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    double D;
    ll N;
    cin >> D >> N;

    cout << ( pow(100, D ) ) << endl;
    ll ans;
    ans =  ll(double( pow(100, D ) )*N);


    cout << ans << endl;

    return 0;
}
