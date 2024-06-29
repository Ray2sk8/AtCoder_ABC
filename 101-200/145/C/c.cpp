#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<double> X(N);
    vector<double> Y(N);

    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    vector<int> q(N);
    double ans = 0;

    for (int i = 0; i < N; i++) {
        q[i] = i;
    }
    sort(q.begin(), q.end());

    do {
        double ans_tmp = 0;
        for (int i = 0; i < N - 1; i++) {
            double dx = double(X[q[i]] - X[q[i+1]]);
            double dy = double(Y[q[i]] - Y[q[i+1]]);
            ans_tmp += pow(dx * dx + dy * dy, 0.5);
        }
        ans += ans_tmp;
        // cout << ans << endl;
    } while (next_permutation(q.begin(), q.end()));

    int num_N = 1;
    for (int i = 2; i <= N; i++) {
        num_N *= i;
    }

    ans /= num_N;

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}