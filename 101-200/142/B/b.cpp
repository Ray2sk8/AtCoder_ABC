// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, K, count = 0;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        ll x;
        cin >> x;
        if(K<=x){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
