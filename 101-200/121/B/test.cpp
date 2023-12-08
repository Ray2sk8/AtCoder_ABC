// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    vector<vector<int>> A(N, vector<int>(M)); // N行 M列
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        cout << B[i];
    }
    cout << endl;

    for (int i = 0; i < N; i++){
        cout << "i:" << i;
        for (int j = 0; j < M; j++){
            cout << " j:"<< j << " " <<  A[i][j];
        }
            cout << endl;
    }
    cout << endl;

    return 0;
}