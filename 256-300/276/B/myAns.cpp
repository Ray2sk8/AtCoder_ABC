#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, K;//都市と道の数

    cin >> N >> K;
    vector<int> vec[N];
    
    for (int i = 0; i < K; i++)
    {
        int x, y;
        cin >> x >> y;
        vec[x - 1].push_back(y);
        vec[y - 1].push_back(x);
    }
    //cout << endl;

    for (int i = 0; i < N; i++)
    {
        cout << vec[i].size() << " ";
        sort(vec[i].begin(), vec[i].end());

        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << ' ';
        }
        cout << endl;
    }



    return 0;
}