// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {

    ll H, W;
    cin >> H >> W;

    vector<vector<string>> C((H + 1) * 2, vector<string>((W + 1) * 2));
    vector<vector<string>> s(H + 1, vector<string>(W + 1));
    
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> s.at(i).at(j);
        }
    }
    //cout << "end4_1" << endl;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            // cout << "i:" << i << " j:" << j << endl;
            C.at(i * 2).at(j) = s.at(i).at(j);
            C.at(i * 2 - 1).at(j) = s.at(i).at(j);
        }
    }

    for (int i = 1; i <= C.size() - 2; i++) {
        for (int j = 1; j <= C.at(0).size() - 2; j++) {
            cout << C.at(i).at(j);
        }
        cout << endl;
    }

    return 0;
}