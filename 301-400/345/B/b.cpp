// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll x;
    cin >> x;

    if (x >= 0) {
        cout << ll( (x+10-1) / 10) << endl;
    } else {

        ll y;
        y = x / 10;

        cout << y << endl;

        // if(x%10 == 0) {
        //     cout << y << endl;
        // } else {

        // }

    }

    return 0;
}
