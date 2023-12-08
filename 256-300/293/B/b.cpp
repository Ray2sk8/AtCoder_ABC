// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll count = 0;
    //  入力
    int N;
    cin >> N;
    vector<vector<int>> A(N + 1, vector<int>(2, false));
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        A.at(i).at(0) = x;
        // 相手を呼ぶのか否か
        //自分がfalseならば呼ぶ
        if (A.at(i).at(1) == false) {
            // 入力したところがfalseならカウント
            if (A.at(x).at(1) == false) {
                count++;
                A.at(x).at(1) = true;
            }
        }
    }

    cout << N - count << endl;

    for (int i = 1; i <= N; i++) {
        if (A.at(i).at(1) != true) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
