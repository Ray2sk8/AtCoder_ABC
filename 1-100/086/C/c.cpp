/**
 * @file c.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-17
 *
 * @copyright Copyright (c) 2023
 *
 * 排他的論理和


 * 
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N;
    cin >> N;
    vector<int> T(N+1,0);
    vector<int> X(N+1,0);
    vector<int> Y(N+1,0);

    for (int i = 1; i <= N; i++) {
        cin >> T.at(i) >> X.at(i) >> Y.at(i);
    }

    for (int i = 1; i <= N; i++) {

        int x = abs(X.at(i) - X.at(i -1));
        int y = abs(Y.at(i) - Y.at(i-1));
        int t = (T.at(i) - T.at(i-1));

        if (   ( (x+y)%2 xor t%2 ) || (x + y) > t ) {
        //距離がtと排他的論理和を満たさない
        //距離が時間より長い
            cout << "No" << endl;
            return 0;
        }
    }


    cout << "Yes" << endl;

    return 0;
}
