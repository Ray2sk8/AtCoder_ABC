/***
 * 02:20
 * 02:42
*/

// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int sum = 0;
    int N; // N種類の問題
    cin >> N;
    vector<int> timeSolve(N);

    for (int i = 0; i < N; i++) {
        cin >> timeSolve.at(i);
        sum += timeSolve.at(i);
    }

    int M; // M種類のドリンク
    cin >> M;
    vector<int> timeDrunk(M); // Mを飲んだ時
    vector<int> numDrink(M);  // Mの番号

    for (int i = 0; i < M; i++) {
        cin >> numDrink.at(i);  // 問題番号
        cin >> timeDrunk.at(i); // 薬を服用した時間
    }

    // cout << "sum:" << sum << endl;

    for (int i = 0; i < M; i++) {
        cout << sum - timeSolve.at(numDrink.at(i) - 1) + timeDrunk.at(i)
             << endl;
        // cout << "time:" << timeSolve.at(numDrink.at(i) -1 ) << " fastTime:"
        // << timeDrunk.at(i) << endl;
    }

    return 0;
}
