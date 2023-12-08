#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<vector<int>> vals(5, vector<int>(2, 0));
// // 2次元ベクトルを表示
// void printVec(const vector<vector<int>> v) {
//     for (int i = 0; i < v.size(); i++) {
//         for (int j = 0; j < v[i].size(); j++) {
//             cout << v[i][j] << "\t";
//         }
//         cout << endl;
//     }
// }



int main() {

    int ans = 0;
    // int now = 0;
    for (int i = 0; i < vals.size(); i++) {
        int x;
        cin >> x;
        vals[i][0] = x; // １０フン区切り最低何個とるのか
        vals[i][1] = x % 10; // 10で割ったあまり
        if (vals[i][1] == 0) {
            vals[i][1] += 10;
        }
    }

    // 第弐要素でソートする
    sort(vals.begin(), vals.end(),
         [](const vector<int> &alpha, const vector<int> &beta) {
             return alpha[1] < beta[1];
         });

    // printVec(vals);

    for (int i = vals.size() - 1; i >= 0; i--) {
        ans += vals[i][0];
        // cout << "v:" << vals[i][0] << "\ttime10:" << vals[i][1] << "\tsum:" << ans<< endl;
        if( i == 0 ){
        }else if (vals[i][1] != 10) {
            ans += 10 - vals[i][1];
        }
    }

    cout << ans << endl;

    return 0;
}
