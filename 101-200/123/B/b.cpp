#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<vector<int>> vals(5, vector<int>(2, 0));

// 2次元ベクトルを表示
void printVec(const vector<vector<int>> v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }
}

int timeCheck(void) {
    int ret = 0;

    for (int i = 0; i < vals.size(); i++) {
        ret += (vals[i][0]);
        int time10 = 10 - vals[i][1];
        cout << "v:" << vals[i][0] << "\ttime10:"<< time10 << "\tsum:" << ret << endl;
        if (i == 5 - 1) {
            break;
        } else if (time10 != 10) {
            ret += time10; // １０分までの待ち時間
        }
    }
    return ret;
}

int main() {

    // int now = 0;
    for (int i = 0; i < vals.size(); i++) {
        cin >> vals[i][0];
        vals[i][1] = vals[i][0] % 10 ; // 10で割った値
    }

    //第弐要素でソートする
    sort(vals.begin(), vals.end(),
         [](const vector<int> &alpha, const vector<int> &beta) {
             return alpha[1] < beta[1];
         });

    printVec(vals);
    int ans = timeCheck();

    cout << ans << endl;

    return 0;
}
