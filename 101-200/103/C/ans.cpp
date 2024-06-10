#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N, A[3010];
int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int ans = 0;
    for (int i = 0; i < N; i++)
        ans += A[i] - 1;
    cout << ans << endl;
}