#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> B;

void solve(int N) {
    if (B[N] == B[N - 1]) {
        int num = B[N];
        B.erase(B.begin() + N);
        B.erase(B.begin() + N - 1);
        // 新しく和を追加
        B.push_back(num + 1);
        if (N - 2 >= 0) {
            if (B[N - 1] == B[N - 2]) {
                solve(N - 1);
            }
        }
    }
}

int main() {

    int N;
    cin >> N;

    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // // vector<ll> A(N);
    // for (int i = 0; i < N; i++) {
    //     A[i] = w[i];
    // }

    // vector<ll> B;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            B.push_back(A[i]);
            continue;
        }

        int size_b = B.size();

        if (B[size_b - 1] == A[i]) {
            B[size_b - 1] = A[i] + 1;

            // cout << "i:" << i << " ";
            // cout << B[size_b - 1] << " " << A[i] << endl;

        } else {
            // 同じでないとき
            B.push_back(A[i]);
        }

        // B 重複
        if (size_b >= 2) {
            solve(size_b - 1);
        }
    }

    int ans = B.size();
    cout << ans << endl;
    // for (auto x : B) {
    //     cout << x << " ";
    // }
    // cout << endl;

    return 0;
}