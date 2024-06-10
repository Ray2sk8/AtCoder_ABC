// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    ll S = 0;
    ll A[N + 1];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        S += A[i];
    }

    long long minx = S, sum = 0;
    for (int i = 1; i <= N-1; i++) {
        // i=N, sum=S 棒全体になる
        sum += A[i];
        // S-sum : もう一方
        minx = min(minx, abs(sum - (S - sum)));
    }
    cout << minx << endl;

    return 0;
}
