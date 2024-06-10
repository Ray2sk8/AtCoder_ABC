#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;
    int A[1000], B[1000];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N-1; i++) {
        if (i >= 2) {
            cout << " ";
        }
        int x = A[i] * A[i + 1];
        cout << x;
    }
    cout << endl;

    return 0;
}