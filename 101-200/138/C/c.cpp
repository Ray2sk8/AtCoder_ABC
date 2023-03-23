#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;

    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    // cout << "after sort" << endl;
    // for (int i = 0; i < N; i++) {
    //     cout << i << ":" << v[i] << " ";
    // }
    // cout << endl;

    double sum = v[0];
    for (int i = 1; i < N; i++) {
        sum = (double)((sum + v[i]) / 2);
        // cout << i << ":" << sum << " ";
    }

    cout << sum << endl;

    return 0;
}