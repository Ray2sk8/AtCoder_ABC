// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

long double temparature(int T, int x) { return T - x * 0.006; }

int main() {
    int N;
    cin >> N;
    int T, A;
    cin >> T >> A;

    vector<int> H(N + 1, 0);
    int ans = 0;
    double score = 1e6;
    for (int i = 1; i <= N; i++) {
        cin >> H[i];
    }

    for (int i = 1; i <= N; i++) {
        // cout << abs(temparature(T, H[i]) - A) << endl;
        double diff = abs(temparature(T, H[i]) - A);
        if (score >= diff ) {
            score = diff;
            ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}
