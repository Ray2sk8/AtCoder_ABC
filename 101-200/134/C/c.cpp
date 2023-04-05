#include <bits/stdc++.h>

using namespace std;
using ll = long long;
// 2次元ベクトルを表示
void printVec(const vector<vector<int>> v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    ll N;
    cin >> N;
    vector<vector<int>> a(N, vector<int>(2, 0));

    for (int i = 0; i < N; i++) {
        cin >> a[i][0];
        a[i][1] = i;
    }

    sort(a.begin(), a.end());
    //printVec(a);

    for (int i = 0; i <N; i++) {
        int j = N-1;
        if (a[j][1] == i) {
            j--;
        }
        cout << a[j][0];// << " a[1]:" << a[i][0]  <<" i:" << i << " j:" << j;
        cout << endl;
    }

    return 0;
}