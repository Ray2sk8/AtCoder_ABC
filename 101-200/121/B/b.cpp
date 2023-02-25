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

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = 0; j < M; j++)
        {
            sum += A[i][j]*B[j];
        }
        sum += C;
        if (sum > 0){
            ++ans;
            //cout << "HIT";
        }
        //cout << "SUM" << sum << "  i:" << i<< endl;
    }

    cout << ans << endl;

    return 0;
}
