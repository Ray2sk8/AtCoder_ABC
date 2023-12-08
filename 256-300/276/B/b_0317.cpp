/**
 * @file b1.cpp
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
    ll N, M;
    cin >> N >> M;

    // vector<vector<int>> City(N + 1, vector<int>(N + 1, 0));
    vector<vector<int>> City(N + 1);

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        City.at(x).push_back(y);
        City.at(y).push_back(x);
    }

    // // 配列をソート
    // sort(City.begin(), City.end());

    for (int i = 1; i <= N; i++) {
        //sort
        sort( City.at(i).begin(), City.at(i).end() );
        cout << City.at(i).size();
        for (int j = 0; j < City.at(i).size(); j++) {
            cout << " " << City.at(i).at(j);
        }
        cout << endl;
    }

    return 0;
}