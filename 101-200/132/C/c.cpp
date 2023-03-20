#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<int> d(N+1);

    for (int i = 1; i <= N; i++) {
        // ll x;
        cin >> d.at(i);
        // d.push_back(x);
    }

    if (N % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(d.begin(), d.end());
    // for(int i=1; i<=N; i++){
    //     cout << d.at(i) << endl;
    // }

    // 区切りがないとき
    if (d.at(N / 2) == d.at(N / 2 + 1)) {

        cout << 0 << endl;
        return 0;
    }

    cout << d.at(N / 2 + 1) - d.at(N / 2)<< endl;

    return 0;
}