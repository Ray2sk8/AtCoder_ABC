/**
 * @file b.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return long long 
 */
long long fSum(ll a, ll b) {
    ll ret;

    ret = (a + b) * (b - a + 1) / 2;

    return ret;
}

int main() {
    ll N;
    cin >> N;
    vector<pair<ll, ll>> p(N);

    for (auto &[a, b] : p) {
        cin >> a >> b;
    }
    // for (auto [a, b] : p) {
    //     cout<< "a:" << a << " b:" << b  << endl;
    // }

    ll sum = 0;
    for (auto [a, b] : p) {
        sum += fSum(a, b);
    }
    cout << sum << endl;
    return 0;
}

