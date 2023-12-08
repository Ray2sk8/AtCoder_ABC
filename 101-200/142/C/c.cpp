#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;

    vector<int> A(N + 1);

    for (int i = 1; i <= N; i++) {
        ll x;
        cin >> x;
        A.at(x) = i;
    }

    for (int i = 1; i <= N; i++) {
        cout << A.at(i) << " ";
    }

    cout << endl;

    return 0;
}