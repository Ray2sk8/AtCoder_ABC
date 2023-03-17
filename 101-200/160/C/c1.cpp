/**
 * @file c1.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll K, N;
    cin >> K >> N;
    vector<int> A(N);
    vector<int> r(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
        if (i == 0) continue;
            r.at(i) = A.at(i) - A.at(i - 1); // 家と前の家の距離
        
    }
    r.at(0) = A.at(0) + K - A.at(N - 1);

    ll minR = K - *max_element(r.begin(), r.end()); 
    cout << minR << endl;
    
    // cout << *max_element(r.begin(), r.end()) << endl;

    return 0;
}