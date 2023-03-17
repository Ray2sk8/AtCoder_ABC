#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<int> A(N + 1, 0);
    vector<int> ans(N + 1, 0);

    for (int i = 2; i <= N; i++) {
        cin >> A.at(i);
    }

    for (int i = 2; i <= N; i++) {
        ans.at(A.at(i))++;
    }

    for (int i = 1; i <= N; i++) {
        cout << ans.at(i) << endl;
    }


    return 0;
}