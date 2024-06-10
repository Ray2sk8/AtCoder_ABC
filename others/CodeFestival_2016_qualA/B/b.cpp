// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        if (A[A[i]] == i) {
            ans++;
        }
    }

    cout << ans/2 << endl;

    return 0;
}
