#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, K;
    cin >> N >> K;

    int A[N];
    vector<int> B;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A[i] = x;
        if (x % K == 0) {
            B.push_back(x);
        }
    }

    for (auto x : B) {
        cout << x/K << " ";
    }

    cout << endl;

    return 0;
}