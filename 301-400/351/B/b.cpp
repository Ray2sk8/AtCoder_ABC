// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    vector<string> A(N);
    vector<string> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int x, y;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i][j] != B[i][j]) {
                x = i + 1;
                y = j + 1;
                // cout << A[i][j] << " " << B[i][j] << endl;
                cout << x << " " << y << endl;
                return 0;
            }
        }
    }

    return 0;
}
