// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
vector<vector<int>> v(N + 1, vector<int>(N + 1, -1));
vector<vector<int>> v1(N + 1, vector<int>(N + 1, -1)); // 一時的な避難場
bool flg = false;

void moveV() {

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            v1[N + 1 - j][i] = v[i][j];
        }
    }

    return;
}

bool judgeV() {

    bool ret = true;

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (v[i][j] != v[j][i]) {
                ret = false;
                return ret;
            }
        }
    }

    flg = true;
    return ret;
}

int main() {

    
    cin >> N;
    int cntM = N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> v[i][j];
        }
    }

    while ( judgeV() != true && cntM >= 0) {
        moveV();
        v = v1;
    }

    if (flg == true && cntM >= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
