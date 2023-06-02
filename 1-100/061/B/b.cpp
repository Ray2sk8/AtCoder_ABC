// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> q(N + 1);

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        q[x].push_back(y);
        q[y].push_back(x);
    }

    for (int i = 1; i <= N; i++) {
        cout << q[i].size() << endl;
    }

    return 0;
}
