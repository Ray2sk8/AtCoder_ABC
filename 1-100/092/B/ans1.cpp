#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100;

int N;
int A[MAX_N];
int D;
int X;

int main() {
    cin >> N;
    cin >> D >> X;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int ans = X;

    for (int i = 0; i < N; i++) {
        int tmp = (D - 1) / A[i] + 1;
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}