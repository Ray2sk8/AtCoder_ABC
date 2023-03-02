#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N; // N個のボール
int K; // typeBのx座標

int shortDist(int x, int y)
{
    int ret; // かかる距離

    int distA = abs(x * 2);
    int distB = abs((K - x) * 2);
    if (distA > distB)
    {
        ret = distB;
    }
    else
    {
        ret = distA;
    }

    return ret;
}

int main()
{
    int ansSum = 0;

    cin >> N;
    vector<int> x(N, 0);
    vector<vector<int>> y(N, vector<int>(N));
    cin >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
        ansSum += shortDist(x[i], i);
    }

    cout << ansSum << endl;

    return 0;
}